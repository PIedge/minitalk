SRV		=	./server_dir/

CLI		=	./client_dir/

all:
			make -C $(CLI)
			cp $(CLI)client ./
			make -C $(SRV)
			cp $(SRV)server ./

clean:
			make -C $(SRV) clean
			make -C $(CLI) clean
fclean: clean
			make -C $(CLI) fclean
			make -C $(SRV) fclean
			rm -f server
			rm -f client

re: fclean all

.phony: all re clean fclean
