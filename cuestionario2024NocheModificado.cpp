#include<iostream>  //para 	cout o cin
#include<conio.h>   //para 	getch();
#include<stdlib.h>  //para 	system("PAUSE");
#include<time.h>
using namespace std;
main()
{
	setlocale(LC_CTYPE, "Spanish");
	int Opc, idioma, preg;//sera la opcion de elegir
	int Salir;//indica el momento para salir del programa
	int numeroAleatorio;
	char respuesta,repetir;
	int indiceAleatorio;
	int contap=0,contan=0,contador=0,aleatorio;
	cout <<"\n Seleccione un idioma\n\n1-Espa�ol\n2-Ingles\n3-Aleman\n";
	cin>>idioma;	 
	if (idioma==1)
		{ 
		cout<<"Estas en idioma-Espa�ol\n";
			do
			{
			contador=contador+1;
			contap=0; contan=0;
			cout<< "Modulos"<<endl;
			cout<< "1)C3 RAP1.CARACTERIZAR LA INFORMACI�N A RECOLECTAR.\n(Establecer requisitos de la soluci�n)."<<endl;
			cout<< "2)C3 RAP2.INTERPRETAR EL INFORME DE REQUISITOS.\n(Establecer requisitos de la soluci�n)."<<endl;
			cout<< "3)C1 RAP1.RESOLVER PROCESOS L�GICOS.\n(DESARROLLAR LA SOLUCI�N DE SOFTWARE)"<<endl;
			cout<< "4)C1 RAP3.CODIFICAR EL SOFTWARE.\n(DESARROLLAR LA SOLUCI�N DE SOFTWARE)"<<endl;
			cout<< "5)C2 RAP1.CONSTRUIR LA BASE DE DATOS.\n(ADMINISTRAR BASE DE DATOS)."<<endl;
			cout<< "6)C2 RAP2.PROGRAMAR SENTENCIAS SQL.\n(ADMINISTRAR BASE DE DATOS)"<<endl;
			cout<< "7)C1 RAP2.CREAR COMPONENTES FRONT-END\n(DESARROLLAR LA SOLUCI�N)"<<endl;
			cout<< "8)LENGUAJE DE PROGRAMACION C++"<<endl;
			cout<< "9)Salir"<<endl;
			cout<<"Dame opcion(rango 1-9)"<<endl;
			cin>>Opc;
			switch (Opc) 
				{
				case 1:
					cout<<"CARACTERIZAR LA INFORMACI�N A RECOLECTAR"<<endl;
					//int aleatorio;
					srand(time(NULL));
					aleatorio=rand()%7;
					switch(aleatorio) 
						{
						case 1:
							cout<<"1-�Que es programacion?"<<endl;
							cout<<"a)dise�ar, depurar, codificar y mantener un codigo"<<endl;
							cout<<"b)Un conjunto de programas"<<endl;
							cout<<"c)Secuencia de operaciones en un determinado orden"<<endl;
							cout<<"d)Se usa para resolver un problema"<<endl;
							cin>>respuesta;
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es ERRONEA"<<endl;
									cout<<"La respuesta es: dise�ar, depurar, codificar y mantener un codigo"<<endl;
									contan=contan+1;
								}
						break;	
						case 2:	
							cout<<"2-�Que es un algoritmo?"<<endl;
							cout<<"a)Es la forma para resolver un problema"<<endl;
							cout<<"b)Un conjunto de criterios para evaluar"<<endl;
							cout<<"c)Una lista de opciones"<<endl;
							cout<<"d)Indica el orden de realizacion"<<endl;
							cin>>respuesta;	
						    if(respuesta=='a')
								{
									cout<<"la respuesta es correcta2"<<endl;
									contap=contap+1;
							    }
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;	
						case 3:
							cout<<"�3-�Cuales son las fases del ciclo de vida del Software?"<<endl;
							cout<<"a)Mantenimiento y evolucion, Identificacion de necesidades"<<endl;
							cout<<"b)Validaci�n, analisis y dise�o"<<endl;
							cout<<"c)Pruebas y codificacion"<<endl;
							cout<<"d)Todas las anteriores"<<endl;
							cin>>respuesta;	
						    if(respuesta=='d')
							    {
							    	cout<<"la respuesta es correcta3"<<endl;
							    	contap=contap+1;
							    }
							else
								{
							    	cout<<"La respuesta es incorrecta3"<<endl; 
									contan=contan+1;
							    }
						break; 
						case 4:
					    	cout<<"4-�Identificacion de Necesidades:�Cuales son las fases para plantear un problema?"<<endl;
							cout<<"a)Establecer y Listar"<<endl;
							cout<<"b)Validar, Analizar y Dise�ar"<<endl;
							cout<<"c)Establecer, Listar, Recabar, Evaluar"<<endl;
							cout<<"d)Ninguna"<<endl;
							cin>>respuesta;
							if(respuesta=='a')
								{
							    	cout<<"la respuesta es correcta"<<endl;	
							    	contap=contap+1;
							    } 
							else
								{
							    	cout<<"La respuesta es incorrecta"<<endl;
							    	contan=contan+1;
							    }
						break;    
						case 5:
					    	cout<<"5-�Que es establecer?"<<endl;
							cout<<"a)Las oportunidades a partir de los criterios que se establezcan"<<endl;
							cout<<"b)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
							cout<<"c)Listar opciones que seran la base de cada oportunidad"<<endl;
							cout<<"d)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
							cin>>respuesta;
							if(respuesta=='b')
								{
							    	cout<<"la respuesta es correcta"<<endl;
							    	contap=contap+1;
							    }
							else
								{
							    	cout<<"La respuesta es incorrecta"<<endl; 
							    	contan=contan+1;	
							    }
						break;    
						case 6:
					    	cout<<"6-�Que es Listar?"<<endl;
							cout<<"a)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
							cout<<"b)Listar opciones que seran la base de cada oportunidad"<<endl;
							cout<<"c)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
							cout<<"d)Las oportunidades a partir de los criterios que se establezcan"<<endl;
							cin>>respuesta;
							if(respuesta=='b')
								{
							    	cout<<"la respuesta es correcta"<<endl<<endl<<endl;
							    	contap=contap+1;
							    }
							else
								{
							    	cout<<"La respuesta es incorrecta"<<endl<<endl<<endl;
							    	contan=contan+1;	
						    	} 
						break;
					   	default:cout<<"noooooooooooooooooooo";
					   	break;
				    }
				break;					
				case 2: 
					cout<<"INTERPRETAR EL INFORME DE REQUISITOS"<<endl;
					srand(time(NULL));
					aleatorio=rand()%11;
					switch(aleatorio) 
						{
						case 1:	
							cout<<"1-�Para que sistemas son dise�adas principalmente la mayor�a de aplicaciones en  la actualidad?"<<endl;
							cout<<"a)android"<<endl;
							cout<<"b)windows"<<endl;
							cout<<"c)ios"<<endl;
							cout<<"d)a y c son correctas"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='d')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 2:		 
							cout<<"2-�Que lenguaje de programacion es comunmente usado para las aplicaciones moviles?"<<endl;
							cout<<"a)Python"<<endl;
							cout<<"b)java"<<endl;
							cout<<"c)C#"<<endl;
							cout<<"d)PHP"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='b')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 3:		
							cout<<"3-�Principalmente para que fueron dise�adas las aplicaciones?"<<endl;
							cout<<"a)Para entretener a las personas"<<endl;
							cout<<"b)Para controlar el sistema operativo de un equipo de computo"<<endl;
							cout<<"c)Para facilitar ciertas tareas complejas y hacer mas sencilla la experiencia informatica de las personas"<<endl;
							cout<<"d)ninguna de las anteriores"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='c')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 4:		
							cout<<"4-�Que es una aplicacion movil?"<<endl;
							cout<<"a)Es una aplicacion dise�ada para ejecutarse en un dispositivo movil, que puede er un telefono inteligente o tablet"<<endl;
							cout<<"b)Una aplicacion movil es lo mismo que una aplicacion web"<<endl;
							cout<<"c)Es una aplicacion web con gestor de contenidos"<<endl;
							cout<<"d)ninguna de las anteriores"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 5:
							cout<<"5-�Para que es una aplicacion nativa?"<<endl;
							cout<<"a)Est� desarrollada y optimizada espec�ficamente para el sistema operativo determinado y la plataforma de desarrollo del fabricante"<<endl;
							cout<<"b)Sirve para compartir informaci�n con otros sistemas operativos "<<endl;
							cout<<"c)Sirven para cargar informaci�n en el sistema operativo"<<endl;
							cout<<"d)para  cambiar su contenido, manteniendo el mismo dise�o y estilo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 6:	
							cout<<"6-�las aplicaciones nativas que se usan en celulares se pueden usar en cuantos sistemas operativo?"<<endl;
							cout<<"a)un solo sistema operativo"<<endl;
							cout<<"b)m�s de 2 sistemas operativos como (Android, iOS y Windows) "<<endl;
							cout<<"c)todos los sistemas operativos."<<endl;
							cout<<"d) la respuesta b y c son correctas."<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 7:	
							cout<<"7-�Qu� tipo de navegador por defecto viene en los dispositivos moviles android?"<<endl;
							cout<<"a)OperaMini"<<endl;
							cout<<"b)Minimo-Mozilla "<<endl;
							cout<<"c)chrome"<<endl;
							cout<<"d)NetFront"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='c')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 8:	
							cout<<"8-�Qu� factor incide en el desarrollo de aplicaciones m�viles?"<<endl;
							cout<<"a)Plataforma"<<endl;
							cout<<"b)Sistema Operativo "<<endl;
							cout<<"c)Dispositivo M�vil"<<endl;
							cout<<"d)lenguaje de desarrollo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 9:	
							cout<<"9-�Cuales son sistemas operativos de moviles?"<<endl;
							cout<<"a)android"<<endl;
							cout<<"b)windows"<<endl;
							cout<<"c)ios"<<endl;
							cout<<"d)a y c son correctas"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='d')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 10:	
							cout<<"10-�En donde se alojan los aplicativos moviles y su cache?"<<endl;
							cout<<"a)En el dispositivo"<<endl;
							cout<<"b)Aplicativo en la nube cache en el dispositivo"<<endl;
							cout<<"c)Unicamente en la nube"<<endl;
							cout<<"d)Hibridamente mitad nube, mitad dispositivo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='b')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						default:cout<<"nooooooooommm";
						break;
						}
				break;
				case 3: 
					cout<<"RESOLVER PROCESOS L�GICOS"<<endl; 
					cout<<"1-�Cual de las siguientes estructuras de control se usa en c++?"<<endl;
					cout<<"a)cin,cout,if"<<endl;
					cout<<"b)read,write,buy"<<endl;
					cout<<"c)tools,fingers,iqual"<<endl;
					cout<<"d)thing,thought,learn"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"2-�como se dice pantalla en ingles?"<<endl;
					cout<<"a)mouse"<<endl;
					cout<<"b)keyboard"<<endl;
					cout<<"c)screen"<<endl;
					cout<<"d)laptop"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"3-�con cual de las siguientes frases se inicia una convresacion en ingles?"<<endl;
					cout<<"a)I am fine"<<endl;
					cout<<"b)it's to late"<<endl;
					cout<<"c)nice to meet you too"<<endl;
					cout<<"d)hi how are you"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"4-�cual de las siguientes estructuras se usa para establecer tipo cadena en c++?"<<endl;
					cout<<"a)int"<<endl;
					cout<<"b)cout"<<endl;
					cout<<"c)string"<<endl;
					cout<<"d)cin"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"5-�como se escribe este numero en ingles 896?"<<endl;
					cout<<"a)eighteen"<<endl;
					cout<<"b)one hundred twenty six"<<endl;
					cout<<"c)fourty five"<<endl;
					cout<<"d)eight hundred ninety six"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}										 
					cout<<"6-�cuales de los siguientes terminos son indispensables en la programacion?"<<endl;
					cout<<"a)smoke,drink,dance"<<endl;
					cout<<"b)develop,template,toolbar"<<endl;
					cout<<"c)username,password,wifi"<<endl;
					cout<<"d)screen,phone,code"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"7-�que lenguajes de programacion no son basados en el idioma ingles?"<<endl;
					cout<<"a)phyton,lua,ruby"<<endl;
					cout<<"b)java,c++,phyton"<<endl;
					cout<<"c)c++,php,basic"<<endl;
					cout<<"d)visual basic,swift,ruby"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"8-I from bogota,�what is my country?"<<endl;
					cout<<"a)Venezuela"<<endl;
					cout<<"b)USA"<<endl;
					cout<<"c)Honduras"<<endl;
					cout<<"d)Colombia"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"9-�which of these language is for beginners?"<<endl;
					cout<<"a)lpp"<<endl;
					cout<<"b)phyton"<<endl;
					cout<<"c)c++"<<endl;
					cout<<"d)visual basic"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"10-�que traduce la siguiente expresion?, how often"<<endl;
					cout<<"a)duracion"<<endl;
					cout<<"b)edad"<<endl;
					cout<<"c)rapidez"<<endl;
					cout<<"d)frecuencia"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}								
				break;
				case 4: cout<< "CODIFICAR EL SOFTWARE."<<endl<<endl;
						cout<< "1-�cual es el valor de 8942 en binario?"<<endl;
						cout<< "a)10001011101110"<<endl;
						cout<< "b)11001011101011"<<endl;
						cout<< "c)10101011101110"<<endl;
						cout<< "d)11010101010111"<<endl;
						cin>>respuesta;
						
						if(respuesta=='a')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "2-�cual es el valor del binario 111111?"<<endl;
						cout<< "a)62"<<endl;
						cout<< "b)63"<<endl;
						cout<< "c)64"<<endl;
						cout<< "d)61"<<endl;
						cin>>respuesta;
						
						if(respuesta=='b')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "3-�cual es el valor en binario de 628?"<<endl;
						cout<< "a)1001011010"<<endl;
						cout<< "b)1111111110"<<endl;
						cout<< "c)1001110100"<<endl;
						cout<< "d)1111100000"<<endl;
						cin>>respuesta;
						
						if(respuesta=='c')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "4-�cual es el valor en decimal de 11000000111001?"<<endl;
						cout<< "a)123123"<<endl;
						cout<< "b)12345"<<endl;
						cout<< "c)12125"<<endl;
						cout<< "d)12344"<<endl;
						cin>>respuesta;
						
						if(respuesta=='b')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "5-�cual es el valor en binario de 33?"<<endl;
						cout<< "a)100001"<<endl;
						cout<< "b)101001"<<endl;
						cout<< "c)100100"<<endl;
						cout<< "d)110000"<<endl;
						cin>>respuesta;
						
						if(respuesta=='a')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "6-�cual es el valor en binario de 42?"<<endl;
						cout<< "a)111010"<<endl;
						cout<< "b)101011"<<endl;
						cout<< "c)110011"<<endl;
						cout<< "d)101010"<<endl;
						cin>>respuesta;
						
						if(respuesta=='d')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "7-�cual es el valor decimal de 1000010000?"<<endl;
						cout<< "a)529"<<endl;
						cout<< "b)526"<<endl;
						cout<< "c)527"<<endl;
						cout<< "d)528"<<endl;
						cin>>respuesta;
						
						if(respuesta=='d')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "8-�cual es el valor en decimal de 110011010100?"<<endl;
						cout<< "a)4823"<<endl;
						cout<< "b)3284"<<endl;
						cout<< "c)8234"<<endl;
						cout<< "d)2348"<<endl;
						cin>>respuesta;
						
						if(respuesta=='b')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "9-�cual es el valor en binario de 62?"<<endl;
						cout<< "a)111110"<<endl;
						cout<< "b)101111"<<endl;
						cout<< "c)110111"<<endl;
						cout<< "d)111011"<<endl;
						cin>>respuesta;
						
						if(respuesta=='a')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}			
						cout<< "10-�que es un numero binario?"<<endl;
						cout<< "a)una interpretacion de textos transformada en 1-0"<<endl;
						cout<< "b)son numeros  que representan constantes positivos y negativos"<<endl;
						cout<< "c)son un arreglo de dos caracteres, 1 y 0"<<endl;
						cout<< "d)son el idioma del internet"<<endl;
						cin>>respuesta;
						
						if(respuesta=='c')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}	
			break;		
			case 5:
					cout<<"CONSTRUIR LA BASE DE DATOS "<<endl; 
					cout<<"1-�Que es Mantenimiento de equipo de computo basico?"<<endl;
					cout<<"a)procedimiento de limpieza  y sustitucion de pieza "<<endl;
					cout<<"b)procedimiento para mantener y programar aplicaciones "<<endl;
					cout<<"c)programa que limpia todo tu pc "<<endl;
					cout<<"d)Todas las anteriores "<<endl;
					cin>>respuesta;
				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta1"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl;
							contan=contan+1;
						}	
							cout<<"2-�Que herramientas se utilizan para el mantenimiento preventivo ?"<<endl;
							cout<<"a)Espuma limpiadora "<<endl;
							cout<<"b)Desarmadores y Pulsera antiestatica "<<endl;
							cout<<"c)Aire comprimido,borrador y brocha "<<endl;
							cout<<"d)Todas las anteriores"<<endl;
							cin>>respuesta;	
				    if(respuesta=='d')
						{
							cout<<"la respuesta es correcta"<<endl;
							contap=contap+1;
					    }
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
							cout<<"�3-�Cual es la manera mas eficas para hacer un mantenimiento ?"<<endl;
							cout<<"a)desconectar el teclado y el mouse "<<endl;
							cout<<"b)salvar los archivos importantes e instalar windows nuevamente"<<endl;
							cout<<"c)limpiar la parte externa"<<endl;
							cout<<"d)Todas son erroneas "<<endl;
							cin>>respuesta;	
				    if(respuesta=='b')
					    {
					    	cout<<"la respuesta es correcta3"<<endl;
					    	contap=contap+1;
					    }
					else
						{
					    	cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
					    }
					    	cout<<"4-�cada cuanto crees que se hace un mantenimiento preventivo?"<<endl;
							cout<<"a)cada 10 a�os"<<endl;
							cout<<"b)cada que el ordenador presenta fallas "<<endl;
							cout<<"c)cuando se considere necesario para evitar posibles da�os"<<endl;
							cout<<"d)cada 3 meses de antelacion que instales programas nuevos "<<endl;
							cin>>respuesta;
					if(respuesta=='c')
						{
					    	cout<<"la respuesta es correcta"<<endl;	
					    	contap=contap+1;
					    } 
					else
						{
					    	cout<<"La respuesta es incorrecta"<<endl;
					    	contan=contan+1;
					    }
					    cout<<"5-�que debo utilizar como refigerante?"<<endl;
							cout<<"a)pasta termica "<<endl;
							cout<<"b)crema de leche "<<endl;
							cout<<"c)crema dental "<<endl;
							cout<<"d)masa refigerante"<<endl;
							cin>>respuesta;
					if(respuesta=='a')
						{
					    	cout<<"la respuesta es correcta"<<endl;
					    	contap=contap+1;
					    }
					else
						{
					    	cout<<"La respuesta es incorrecta"<<endl; 
					    	contan=contan+1;	
					    }
			break;
			case 6:
					cout<<"PROGRAMAR SENTENCIAS SQL. "<<endl; 
					cout<<"1-�Cu�les son los pilares de la programaci�n orientada a objetos?"<<endl;
					cout<<"a)abstracci�n, encapsulamiento, polimorfismo y herencia."<<endl;
					cout<<"b)herencia, clases, subclase, encapsulamiento "<<endl;
					cout<<"c)polimorfismo, herencia"<<endl;
					cout<<"d)datos, funcionalidades, polimorfismo"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"2-�Qu� significado en (poo) paradigma?"<<endl;
					cout<<"a)C�digo de programaci�n con una estructura espec�fica"<<endl;
					cout<<"b)Base de datos del usuario"<<endl;
					cout<<"c)Estilo diferente de programar del programador"<<endl;
					cout<<"d)Restricci�n de datos al usuario"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"3-�Que es una superclase en (poo)?"<<endl;
					cout<<"a)Dependencia del programa"<<endl;
					cout<<"b)Creaci�n de nuevas clases"<<endl;
					cout<<"c)En donde se insertan los datos de los usuarios"<<endl;
					cout<<"d)La clase cuyas caracter�sticas se heredan"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"4-�Que funcionalidad en programaci�n orientada a objetos?"<<endl;
					cout<<"a)Pedir todos de usuario "<<endl;
					cout<<"b)Ordenes programadas en las clases"<<endl;
					cout<<"c)Seguridad del programa"<<endl;
					cout<<"d)Todas las anteriores"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"5-�Datos = Atributos?"<<endl;
					cout<<"a)Falso"<<endl;
					cout<<"b)Verdadero"<<endl;
					cout<<"c)no se "<<endl;
					cout<<"d)ninguno"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"6-�Para que nos sirve una clase en poo?"<<endl;
					cout<<"a)Por si sola no nos sirve de nada"<<endl;
					cout<<"b)Para definir un objeto "<<endl;
					cout<<"c)Para aprender"<<endl;
					cout<<"d)Ninguna"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"7-�Que pilar del poo permite todo lo referente a que un objeto quede aislado dentro de este?"<<endl;
					cout<<"a)Encapsulacion"<<endl;
					cout<<"b)Polimorfismo "<<endl;
					cout<<"c)Abstraccion"<<endl;
					cout<<"d)Herencia"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"8- Polimorfismo se refiere a: "<<endl;
					cout<<"a)Poder modificar algunos datos heredados"<<endl;
					cout<<"b)Representacion de caracteristicas de entidades hacia el mundo exterior, pero ocultando la complejidad"<<endl;
					cout<<"c)Varios objetos de diferentes clases, pero con una base com�n, se pueden usar de manera indistintal"<<endl;
					cout<<"d)Todas las anteriores"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"9-�Cual es el concepto verdadero de atributo?"<<endl;
					cout<<"a)Consigue clasificar los tipos de datos (abstracciones) por variedad (ES-UN), acercando un poco m�s el mundo de la programaci�n al modo de razonar humano, por ejemplo, diremos que Un perro ES_UN animal."<<endl;
					cout<<"b)definen el comportamiento de un objeto: las acciones que puede realizar en funci�n de los eventos que ocurran en su entorno y de su estado actu"<<endl;
					cout<<"c)Es un elemento tangible (ocupa memoria) generado a partir de una definici�n de clase."<<endl;
					cout<<"d)Se define como la capacidad de una entidad de referenciar distintos elementos en distintos instantes de tiempo."<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"10-�cual es la herramientas que permite modelar relaciones entre diferentes entidades?"<<endl;
					cout<<"a)Herencia"<<endl;
					cout<<"b)Encapsulamiento"<<endl;
					cout<<"c)Diagrama de clases"<<endl;
					cout<<"d)Funciones"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
			break;
			case 7: 
					cout<<"CREAR COMPONENTES FRONT-END"<<endl; 
					cout<<"1-�cuales son los tres pilares principales de la ciberseguridad?"<<endl;
					cout<<"a)amistad, valores y conocimiento"<<endl;
					cout<<"b)avances tecnologicos, antivirus y protocolos"<<endl;
					cout<<"c)honestidad, confidencialidad y recursos"<<endl;
					cout<<"d)Integridad, confidencialidad y disponibilidad"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"		2-�Cu�les son los principales tipos de ataques y alertas actuales?"<<endl;
					cout<<"a)APT, Advanced Persistent Threat"<<endl;
					cout<<"b)El phishing"<<endl;
					cout<<"c)Malware"<<endl;
					cout<<"d)Fake News"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"		3-�A que se le considera Antispyware?"<<endl;
					cout<<"a)funcion que procesa algoritmos decodificados"<<endl;
					cout<<"b)programa para controlar el sistema operativo de un equipo de computo"<<endl;
					cout<<"c)Herramienta de software dise�ada para detectar y eliminar programas maliciosos"<<endl;
					cout<<"d)ninguna de las anteriores"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
							cout<<"		4-�Que es un Backup?"<<endl;
					cout<<"a)Copia de seguridad que protege los datos en caso de ser eliminados del disco duro"<<endl;
					cout<<"b)herramienta de sefuridad compuesto por varios programas enlazados"<<endl;
					cout<<"c)Es una aplicacion web con gestor de contenidos"<<endl;
					cout<<"d)programa informatico que aprovecha errores para mejorar su desarrollo"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"5-�Cual es el objetivo de la ciberseguridad?"<<endl;
					cout<<"a)prevenir, proteger y detectar amenazas de manera temprana en datos o informacion sensible, asi mismo recuperar datos y/o dispositivos atacados "<<endl;
					cout<<"b)Es el estudio que comprende el an�lisis y gesti�n de sistemas llevado a cabo por profesionales en tecnolog�as de la informaci�n (TI) con el objetivode identificar, enumerar y describir las diversas vulnerabilidades"<<endl;
					cout<<"c)Es dirigir las transacciones comerciales entre empresas, utilizando medios telem�ticos como EDI (Electronic Data Interchange) o el Comercio Electr�nico."<<endl;
					cout<<"d)Tiene como objetivo dirigir las rutas de los datos en riesgo a bases seguras para ser analizadas por personal profesional con sofware adaptado a las necesidades "<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"6-�Que es un dominio en ciberseguridad?"<<endl;
					cout<<"a)Es un solo sistema operativo destinado a la navegacion en la web"<<endl;
					cout<<"b)Es una direccion unica y legible para identificar y acceder a recursos de la web"<<endl;
					cout<<"c)es la parte que se puede personalizar y puede elegir el propietario del sitio web."<<endl;
					cout<<"d) la respuesta b y c son correctas."<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"7-�cuales son las fases de la ciberseguridad?"<<endl;
					cout<<"a)compilar, operar, solucionar y verificar"<<endl;
					cout<<"b)Prevencion, metodologia, transformacion y regulacion"<<endl;
					cout<<"c)Prevencion, deteccion, respuesta y conservacion"<<endl;
					cout<<"d)todas las opciones son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"8-�Que es la criptografia en la seguridad cibernetica ?"<<endl;
					cout<<"a)Es un codigo con orden estructurado de aspectos basicos para la proteccion de datos"<<endl;
					cout<<"b)Es un sistema Operativo que encripta informacion para dificultar su violacion"<<endl;
					cout<<"c)Es una pr�ctica que consiste en proteger informaci�n mediante el uso de algoritmos codificados, hashes y firmas"<<endl;
					cout<<"d)Es un lenguaje de desarrollo cibernetico que guarda datos para trasladarlos de forma segura de una base a otra"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"9-Funciones de un Firewall"<<endl;
					cout<<"a)proteger el sistema de malware, gusanos y virus"<<endl;
					cout<<"b)dirigir la informacion a un servidor para que contenido no sea publico"<<endl;
					cout<<"c)impide la filtracion de contenido"<<endl;
					cout<<"d)a y c son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"10-�Cuales son los beneficios de la ciberseguridad?"<<endl;
					cout<<"a)cumplir con requisitos legales, evitar perdidas financieras, conciencia de seguridad"<<endl;
					cout<<"b)control de acceso, productividad del equipo, recuperacion de informacion"<<endl;
					cout<<"c)proteccion a la infraestructura de la red, confianza, monitoreo interno"<<endl;
					cout<<"d)todas las anteriores"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
			break;
			case 8: 
				cout<<"LENGUAJE DE PROGRAMACION C++"<<endl; 
					cout<<"1-�Que es C++?"<<endl;
					cout<<"a)Lenguaje de se�as"<<endl;
					cout<<"b)Lenguaje de programaci�n considerado como uno de los de mayor nivel en cuanto a posibilidades en el mundo de la manipulaci�n de objetos."<<endl;
					cout<<"c)Lenguaje de programacion para realizar pausas activas"<<endl;
					cout<<"d)a y c son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"2.�Que es una base de datos en C++?"<<endl;
					cout<<"a)Alternativa para almacenar y procesar datos a gran escala. "<<endl;
					cout<<"b)Es un archivo que contiene datos"<<endl;
					cout<<"c)Es un disco duro"<<endl;
					cout<<"d)Es un espacio en la nube de almacenamiento"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"3-�Como funciona el cout y el cin?"<<endl;
					cout<<"a)El cout sirve para cortar y el cin para pegar"<<endl;
					cout<<"b)El cin se utiliza para introducir datos con el operador"<<endl;
					cout<<"c)El cout permite mostrar por pantalla cualquier tipo de dato"<<endl;
					cout<<"d)b y c son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"4.�Para que se utilizan las bibliotecas en C++?"<<endl;
					cout<<"a)Sitio para investigar,aprender y leer "<<endl;
					cout<<"b)Para guardar informacion"<<endl;
					cout<<"c)Contienen el c�digo objeto de muchos programas que permiten hacer cosas comunes, como leer el teclado, escribir en la pantalla,etc"<<endl;
					cout<<"d)b y c son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"5-�cual es la funcion que cumple el if/else?"<<endl;
					cout<<"a)if condici�n define la condici�n que determina qu� valor se asigna."<<endl;
					cout<<"b)Else expresi�n define el valor que se asigna si la condici�n es false. ."<<endl;
					cout<<"c)se utiliza para introducir datos con el operador"<<endl;
					cout<<"d)a y b son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"6.�Que funcion cumple el char?"<<endl;
					cout<<"a)Se usa para abrir un caso"<<endl;
					cout<<"b)Se usa para almacenar el valor entero de un miembro del juego de caracteres que se puede representar."<<endl;
					cout<<"c)Es un lenguaje de programacion"<<endl;
					cout<<"d)Es un archivo"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"7.�Para que incluimos el <iostream>?"<<endl;
					cout<<"a)Se usa para que el cout y el cin funcionen"<<endl;
					cout<<"b)Se usa para almacenar un numero"<<endl;
					cout<<"c)Para que lea el programa"<<endl;
					cout<<"d)Para agregar un color a los caracteres"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"8.�Que funcion cumple el endl?"<<endl;
					cout<<"a)Se usa para ejecutar el programa"<<endl;
					cout<<"b)Se usa para compilar el programa"<<endl;
					cout<<"c)Se usa oara acabar la linea y pasar a la siguiente"<<endl;
					cout<<"d)Se usa para terminar el programa"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"9.�Que funcion cumple el using namespace std?"<<endl;
					cout<<"a)Se usa para abrir un caso"<<endl;
					cout<<"b)Permite tener un alcance directo a todas las funciones declaradas en un espacio de nombres"<<endl;
					cout<<"c)nombre de espacio"<<endl;
					cout<<"d)saturacion de archivos"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"10.�Con que funcion declaramos un entero?"<<endl;
					cout<<"a)todas las anteriores"<<endl;
					cout<<"b)con la funcion else"<<endl;
					cout<<"c)int"<<endl;
					cout<<"d)a y b son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}						
			break;
			case 9:		cout<<"Algoritmia"<<endl;	 
			break;
			case 11:	cout<<"otrassssss"<<endl;
			break;																		
			case 10: 	cout<< "10)Salir"<<endl;
						exit(0);
			break;
			default:cout<<endl<<endl<<"No hay opciom"<<endl<<endl;
			break;
					//system ("pause");	//getch();	

				}	
			cout<<"  Las respuestas correctas fueron: "<<contap<<endl;
			cout<<"Las respuestas incorrectas fueron: "<<contan<<endl;
			if(contap>=5)
				{
					cout<<"felicitaciones aprobaste el examen"<<endl<<endl;
				}
			else
				{
				if(contador==2)
					{
						repetir='n';
						cout<<"La cantidad de intentos ha terminado tu calificacion es: "<<contap<<" NO aprobaste el examen"<<endl<<endl;
					}
				else
					{
					if(contador<2)
						{
							cout<<"deseas repetir la prueba? s/n"<<endl<<endl;
							cin>>repetir;
						}
					}
				}	
			}
		while((contap<5) && (repetir=='s'));
		}					
	else
		{
		if(idioma==2)
			{
				cout<<"Estas en idioma- Ingles "<<endl;
			}
		else
			{
			if(idioma==3)
				{
					cout<<"Estas en idioma- Aleman "<<endl;
				}	
			else
				{
					cout<<"Estas en idioma- desconocido "<<endl;	
				}
			}
		}
}
