//Cria um server socket desamarrado de qualquer porta.
ServerSocket::ServerSocket() throw (IOException){

}
//Cria um server socket, amarrado na porta específica.
ServerSocket::ServerSocket(int port) throw (IOException){

}
//Amarra o ServerSocket ao endereço do host local e à porta específica.
void ServerSocket::bind(int port) throw (IOException){

}
//Escuta a porta por conexões a serem feitas neste socket e as aceita, retornando um objeto socket que representa o socket remoto conectado.
//O metodo é bloqueante enquanto a conexao é estabelecida.
Socket* ServerSocket::accept() throw (IOException){

}
//Fecha este socket.
void ServerSocket::close() throw (IOException){

}

//Retorna o número da porta que este socket está escutando.
int ServerSocket::getLocalPort(){
    return 0;
}

//destrutor
ServerSocket::~ServerSocket(){

}
