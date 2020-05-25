#pragma omp parallel
    {
#pragma omp for
        for (int i = 0; i < equations_amount; i++)
        {
            X[i] = 0;
            for (int j = 0; j < equations_amount; j++)
                X[i] += matrix[i][j] * B[j];
        }
}
