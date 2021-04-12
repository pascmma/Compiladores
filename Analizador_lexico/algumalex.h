#pragma once

enum TipoToken {
	PCDeclaraciones, PCAlgoritmo, PCEntero, PCReal, PCAsignar, PCA, PCLeer,
	PCImprimir, PCSi, PCEntonces, PCMientras, PCInicio, PCFin,
	OpAritMult, OpAritDiv, OpAritSuma, OpAritSub,
	OpRelMenor, OpRelMenorIgual, OpRelMayorIgual,
	OpRelMayor, OpRelIgual, OpRelDif,
	OpBoolY, OpBoolO,
	Delim, AbrePar, CierraPar, Var, NumEnt, NumReal, Cadena, Fin
};
