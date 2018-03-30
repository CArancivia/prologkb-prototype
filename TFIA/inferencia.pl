:-dynamic sub_genre/2.
:-dynamic juego_genero/3.
:-dynamic juego_plataforma/2.

%FUNCIONES

agregar_1(Juego,Subgenero,Genero):-
	juego_genero(Juego,Subgenero,Genero)->
	true;
	assert(juego_genero(Juego,Subgenero,Genero)).

agregar_2(Juego,Plataforma):-
	juego_plataforma(Juego,Plataforma)->
	true;
	assert(juego_plataforma(Juego,Plataforma)).

recomiendame_info(Juego,Plataforma,Genero,Subgenero):-
    juego_plataforma(Juego,Plataforma),
    juego_genero(Juego,Subgenero,Genero).

quitar_juego(Juego):-
    retract(juego_genero(Juego,_,_)),
    retract(juego_plataforma(Juego,_)).

agregar_item(Juego,Plataforma,Genero,Subgenero):-
	agregar_1(Juego,Subgenero,Genero),
	agregar_2(Juego,Plataforma).

agregar_genero(Genero,Subgenero):-
    assert(sub_genre(Genero,Subgenero)).

obtener_generos(Genero,Subgenero):-
    sub_genre(Genero,Subgenero).
