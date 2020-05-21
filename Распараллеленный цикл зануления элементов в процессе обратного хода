#pragma omp parallel
        {
#pragma omp for
            for (int i = k - 1; i > -1; i--)
            {
                double multi = matrix[i][k];

                for (int j = 0; j < size; j++)
                {
                    matrix[i][j] -= multi * matrix[k][j];
                    E[i][j] -= multi * E[k][j];
                }
            }
    }
