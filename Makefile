.DEFAULT_GOAL := help

SRV		=	./server_dir/

CLI		=	./client_dir/

all: ## Compil the project, two executables are expected
			make -C $(CLI)
			cp $(CLI)client ./
			make -C $(SRV)
			cp $(SRV)server ./

clean: ## Deletes every oject files
			make -C $(SRV) clean
			make -C $(CLI) clean
fclean: clean ## Like clean but deletes executables too
			make -C $(CLI) fclean
			make -C $(SRV) fclean
			rm -f server
			rm -f client

re: fclean all ## Remakes everything from ground up

help: ## you found me
		@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?##"}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

.phony: all re clean fclean help
