//Cria um server socket desamarrado de qualquer porta.
ServerSocket::ServerSocket() throw (IOException){

}
//Cria um server socket, amarrado na porta espec�fica.
ServerSocket::ServerSocket(int port) throw (IOException){

}
//Amarra o ServerSocket ao endere�o do host local e � porta espec�fica.
void ServerSocket::bind(int port) throw (IOException){

}
//Escuta a porta por conex�es a serem feitas neste socket e as aceita, retornando um objeto socket que representa o socket remoto conectado.
//O metodo � bloqueante enquanto a conexao � estabelecida.
Socket* ServerSocket::accept() throw (IOException){

}
//Fecha este socket.
void ServerSocket::close() throw (IOException){

}

//Retorna o n�mero da porta que este socket est� escutando.
int ServerSocket::getLocalPort(){
    return 0;
}

//destrutor
ServerSocket::~ServerSocket(){

}
