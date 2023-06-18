#include "pch.h"
#include "DB.h"
//se aplican los metodos de la clase
DB::DB()//se llama al metodo constructor
{
	this->connectionString= "datasource=localhost; username=root; password=localhost; database=proyectocrud;"; //colocamos parametros para conectar base de datos
	this->conn = gcnew MySqlConnection(this->connectionString); //creando la conexion con MySql
}	

void DB::AbrirConexion() //metodo que abre la conexion
{
	this->conn->Open();
}

void DB::CerrarConexion()//metodo para cerrar la conexion
{
	this->conn->Close();
}

DataTable^ DB::getData() //metodo para obtener la informacion
{
	String^ sql = "select * from registro_de_ventas"; //seleccionamos todo de la tabla registro de ventas
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); //hacemos el cursor
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor); //adaptador de los datos para lo que necesitamos
	DataTable^ tabla = gcnew DataTable(); //creamos una tabla de datos
	data->Fill(tabla); //hacemos que la tabla se llene con la informacion
	return tabla; //retornamos la tabla
}

void DB::Insertar(String^ nombre, String^ marca, String^ serie, String^ anio_fabricacion, String^ placa, String^ motor) //metodo para insertar a la base de datos con las variables privadas
{
	String^ sql = "insert into registro_de_ventas(Nombre, Marca, Serie, Año, Placa,Motor) values ('" + nombre + "', '" + marca + "', '" + serie + "', '" + anio_fabricacion + "', '" + placa + "','" + motor + "')"; //indicamos que variables iran en su respectiva casilla
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); //hacemos el cursor
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) //si hay un error se muestra un mensaje en pantalla
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::Modificar(String^ nombre, String^ marca, String^ serie, String^ anio_fabricacion, String^ placa, String^ ref) //metodo para modificar en la base de datos las variables privadas
{
	String^ sql = "update registro_de_ventas set Nombre = '" + nombre + "', Marca = '" + marca + "', Serie = '" + serie + "', Año = '" + anio_fabricacion + "', Placa = '" + placa + "' where Id = '" + ref + "'"; //indicamos que variables se modificaran respectivamente
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); //hacemos el cursor
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) //si hay un error se muestra un mensaje en pantalla
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::Eliminar(String^ id)
{
	String^ sql = "delete from registro_de_ventas where Id = '" + id + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); //hacemos el cursor
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminacion completada correctamente!");
	}
	catch (Exception^ e) //si hay un error se muestra un mensaje en pantalla
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}