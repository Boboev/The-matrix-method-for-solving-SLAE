double div = matrix[k][k];

#pragma omp parallel
        {
#pragma omp for
            for (int j = 0; j < size; j++)
            {
                matrix[k][j] /= div;
                E[k][j] /= div;
            }
    }
