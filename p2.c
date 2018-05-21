#include <stdio.h>
#include <math.h>

void troca_linhas(float **m, int lin1, int lin2){
	float *aux;
	int i, j;

	aux = malloc(n * sizeof(float));

	for(i = 0; i < n; i++)
		aux[i] = m[lin1][i];

	for(i = 0; i < n; i++){
		m[lin1][i] = m[lin2][i];
		m[lin2][i] = aux[i];
	}
	free(aux);
}

void lu(float **m, int n, int *p){
	int i, j, i_max;
	float *c;

	c = malloc(n * sizeof(float));
	aux1 = malloc(n * sizeof(float));
	aux2 = malloc(n * sizeof(float));

	for(i = 0; i < n; i++) p[i] = i; /* inicia vetor de permutação */
	for(j = 0; j < n; j++){
		for(k = 0; k < n-1; k++){ /* procura maior elemento na coluna que deve-se zerar */
			i_max = 0;
			*c = m[j][k];
			for(i = k + 1; i < n; i++){
				if(fabs(*(c+=n)) > v_max){ /* percorre a mesma coluna */
					i_max = i;
					v_max = fabs(*c);
				}
			}
			if(i_max > k){ /* se o maior elemento da coluna estiver abaixo do k -> troca as linhas de lugar */
				troca_linhas(m, n, i_max, k);
				// troca matriz de permutação Q
			}
		}
	}
}

int main(){
	
}