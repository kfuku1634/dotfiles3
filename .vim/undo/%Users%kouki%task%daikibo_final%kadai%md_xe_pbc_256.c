Vim�UnDo� �����r���)k�гxnU�Y޹�qG��$.#   �   /        #pragma omp parallel for private (i, j)   ]                          [bޥ    _�                             ����                                                                                                                                                                                                                                                                                                                                                             [W�C    �   �   �          
	return 0;�   �   �          	fclose(fp3);�   �   �          	fclose(fp2);�   �   �          	fprintf(fp3, "%le\n", time0);�   �   �          	}�   �   �          9		fprintf(fp3, "%le %le %le\n", v[i][0],v[i][1],v[i][2]);�   �   �          9		fprintf(fp3, "%le %le %le\n", x[i][0],x[i][1],x[i][2]);�   �   �          	for(i = 0; i < npart; i++){�   �   �          X	fprintf(fp3, "%ld %ld %le %le %le %le %le %le\n", npart,nstep,sigma,e,wm,cell,tset,dt);�   �   �          /* output */�   �   �          	}�   �   �          *		printf("time= %le   T= %f \n", time0,t);�   �   �          >		printf("Ek ,Ep, E( %d )= %le %le %le \n", k,ekin,epot,etot);�   �   �          C	    fprintf(fp2, "%le %le %le %le %le\n", time0,ekin,epot,etot,t);�   �   �          /* monitor */�   �   �          		etot = epot + ekin;�   �   �          		ekin = av2 * wm / 2.e0 * avo;�   �   �          		epot = u * avo / npart;�   �   �          %/* calculation of the total energy */�   �   �          		t = wm * av2 / (3.e0 * wkb);�   �   �          		av2 = sv2 / npart;�   �   �          		}�   �   �          D			sv2 += v[i][0] * v[i][0] + v[i][1] * v[i][1] + v[i][2] * v[i][2];�   �   �          		for(i = 0; i < npart; i++){�   �   �          		sv2=0.e0;�   �   �          !/* summation of the velocities */�   �   �          		}�   �   �          			}�   �   �          				fb[i][l] = fa[i][l];�   �   �          %				v[i][l] += dt*fa[i][l]/(2.e0*wm);�   �   �          			for(l = 0; l < 3; l++){�   �   �          		for(i = 0; i < npart; i++){�   �   �          /* update velocity */�   �   �          	}�   �   �          		}�   �   �          			}�   �   �          				u += 4 * e * (rd12 - rd6);�   �   �          				}�   �   �          					fa[j][l] -= fdx[l];�   �   �          					fa[i][l] += fdx[l];�   �   �          					fdx[l] = fk * dx[l] / d2;�   �   �          				for(l = 0; l < 3; l++){�   �   �          '				fk = 48 * e * (rd12 - rd6 * 0.5e0);�   �   �          				rd12 = rd6 * rd6;�      �          				rd6 = rd2 * rd2 * rd2;�   ~   �          				rd2 = r2 / d2;�   }             		    if(d2 < rc2) {�   |   ~          6			d2 = dx[0] * dx[0] + dx[1] * dx[1] + dx[2] * dx[2];�   {   }          			}�   z   |          				}�   y   {           					dx[l] -= sgn(dx[l]) * cell;�   x   z          				if(fabs(dx[l]) > cellh){�   w   y          !		    	dx[l] = x[i][l] - x[j][l];�   v   x          			for(l = 0; l < 3; l++){�   u   w          		for(j = i+1; j < npart; j++){�   t   v          	for(i = 0; i < npart-1; i++){�   s   u          	}�   r   t          		}�   q   s          			fa[i][l] = 0.e0;�   p   r          		for(l = 0; l < 3; l++){�   o   q          	for(i = 0; i < npart; i++){�   n   p          
	u = 0.e0;�   m   o          /* force */�   l   n          		}�   k   m          			}�   j   l          				}�   i   k          "					x[i][l] -= sgn(dx[l]) * cell;�   h   j          				if(fabs(dx[l]) > cellh){�   g   i          				dx[l] = x[i][l]-cellh;�   f   h          			for(l = 0; l < 3; l++){�   e   g          		for(i = 0; i < npart; i++){�   d   f          !/* periodic boundary condition */�   c   e          		}�   b   d          			}�   a   c          				x[i][l] += dt * v[i][l];�   `   b          +				v[i][l] += dt * fb[i][l] / (2.e0 * wm);�   _   a          			for(l = 0; l < 3; l++){�   ^   `          		for(i = 0; i < npart; i++){�   ]   _          "/* update position and velocity */�   \   ^          		time0 = dt + time0;�   [   ]          	for(k = 0; k < nstep; k++){�   Z   \          /* main loop */�   X   Z          	}�   W   Y          		}�   V   X          			}�   U   W          				u += 4 * e * (rd12 - rd6);�   T   V          				}�   S   U          					fb[j][l] -= fdx[l];�   R   T          					fb[i][l] += fdx[l];�   Q   S          					fdx[l] = fk * dx[l] / d2;�   P   R          				for(l = 0; l < 3; l++){�   O   Q          '				fk = 48 * e * (rd12 - rd6 * 0.5e0);�   N   P          				rd12 = rd6 * rd6;�   M   O          				rd6 = rd2 * rd2 * rd2;�   L   N          				rd2 = r2 / d2;�   K   M          		    if(d2 < rc2) {�   J   L          6			d2 = dx[0] * dx[0] + dx[1] * dx[1] + dx[2] * dx[2];�   I   K          			}�   H   J          				}�   G   I          					dx[l] -= sgn(dx[l])*cell;�   F   H          				if(fabs(dx[l]) > cellh){�   E   G          !		    	dx[l] = x[i][l] - x[j][l];�   D   F          			for(l = 0; l < 3; l++){�   C   E          		for(j = i+1; j < npart; j++){�   B   D          	for(i = 0; i < npart-1; i++){�   A   C          	}�   @   B          		}�   ?   A          			fb[i][l] = 0.0e0;�   >   @          		for(l = 0; l < 3; l++){�   =   ?          	for(i = 0; i < npart; i++){�   <   >          	u = 0.0e0;�   ;   =          /* force */�   9   ;          	}�   8   :          		}�   7   9          			v[i][l] -= av[l];�   6   8          		for(l = 0; l < 3; l++){�   5   7          	for(i = 0; i < npart; i++){�   4   6          	}�   3   5          		av[l] = sv[l] / npart;�   2   4          	for(l = 0; l < 3; l++){�   1   3          	}�   0   2          		}�   /   1          			sv[l] += v[i][l];�   .   0          		for(l = 0; l < 3; l++){�   -   /          	for(i = 0; i < npart; i++){�   ,   .          	}�   +   -          		sv[l]=0.e0;�   *   ,          	for(l=0; l<3; l++){�   )   +          !/* remove momentum of the cell */�   '   )          	cellh = cell * 0.5e0;�   &   (          	rc2 = rc * rc;�   %   '          	r2 = sigma * sigma;�   $   &          	rc = 3.0e0 * sigma;�   "   $          	fclose(fp1); �   !   #          	fscanf(fp1, "%le", &time0);�       "          	}�      !          9		fscanf(fp1, "%le %le %le", &v[i][0],&v[i][1],&v[i][2]);�                 9		fscanf(fp1, "%le %le %le", &x[i][0],&x[i][1],&x[i][2]);�                	for(i=0; i<npart; i++){�                	npart = 256;�                [	fscanf(fp1,"%ld %ld %le %le %le %le %le %le",&npart,&nstep,&sigma,&e,&wm,&cell,&tset,&dt);�                /* read initial data */�                	�                	avo = 6.02213673e+23;�                	wkb = 1.38065812e-23;�                #	fp3 = fopen("xe_out_256.d", "w"); �                $	fp2 = fopen("xe_moni_256.d", "w"); �                #	fp1 = fopen("xe_ini_256.d", "r"); �                	FILE *fp1,*fp2,*fp3;�                	int i,j,k,l,npart,nstep;�                %	double rc,r2,rc2,d2,rd2,rd6,rd12,fk;�                	double fdx[3];�                	double sv2,av2,cellh,aa;�                	double etot,ekin,epot,u;�                0	double wkb,avo,sigma,e,wm,cell,tset,dt,time0,t;�   
             	double av[3],sv[3],dx[3];�   	             6	double v[1000][3],fa[1000][3],fb[1000][3],x[1000][3];�                
	return 0;�                	if (x < 0) return -1;�                	if (x > 0) return 1;5�_�                    t       ����                                                                                                                                                                                                                                                                                                                                                             [`9    �   t   v   �    5�_�                    u       ����                                                                                                                                                                                                                                                                                                                                                             [`;     �   t   v   �              5�_�                    u   !    ����                                                                                                                                                                                                                                                                                                                                                             [`;     �   t   v   �      !#pragma omp parallel for private 5�_�                    u   &    ����                                                                                                                                                                                                                                                                                                                                                             [`;     �   t   v          '#pragma omp parallel for private (j, k)5�_�                    u   &    ����                                                                                                                                                                                                                                                                                                                                                             [`;    �   t   v   �      '#pragma omp parallel for private (j, k)5�_�                    u        ����                                                                                                                                                                                                                                                                                                                                                             [`<    �   t   v   �      '#pragma omp parallel for private (j, k)5�_�      	              u   *    ����                                                                                                                                                                                                                                                                                                                                                             [`A    �   t   v   �      /        #pragma omp parallel for private (j, k)5�_�      
           	   u   *    ����                                                                                                                                                                                                                                                                                                                                                             [`A    �   t   v   �      .        #pragma omp parallel for private (, k)5�_�   	              
   u   -    ����                                                                                                                                                                                                                                                                                                                                                             [`D    �   t   v   �      /        #pragma omp parallel for private (i, k)5�_�   
                 u   -    ����                                                                                                                                                                                                                                                                                                                                                             [`D   	 �   t   v   �      .        #pragma omp parallel for private (i, )5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [`A   
 �         �    �         �    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [`B     �         �      #include <math.h> 5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [`C    �         �      #include <mth.h> 5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [`C    �         �      #include <mh.h> 5�_�                    v        ����                                                                                                                                                                                                                                                                                                                                                             [bޗ    �   u   v          /        #pragma omp parallel for private (i, j)5�_�                    \       ����                                                                                                                                                                                                                                                                                                                                                             [bޛ    �   \   ^   �    �   \   ]   �    5�_�                    ]       ����                                                                                                                                                                                                                                                                                                                                                             [bޟ    �   \   ^   �      /        #pragma omp parallel for private (i, j)5�_�                    ]   '    ����                                                                                                                                                                                                                                                                                                                                                             [bޢ     �   \   ^   �      +    #pragma omp parallel for private (i, j)5�_�                    ]   '    ����                                                                                                                                                                                                                                                                                                                                                             [bޢ    �   \   ^   �      *    #pragma omp parallel for private (i j)5�_�                    ]   '    ����                                                                                                                                                                                                                                                                                                                                                             [bޣ    �   \   ^   �      )    #pragma omp parallel for private (ij)5�_�                     ]   &    ����                                                                                                                                                                                                                                                                                                                                                             [bޤ    �   \   ^   �      (    #pragma omp parallel for private (i)5��