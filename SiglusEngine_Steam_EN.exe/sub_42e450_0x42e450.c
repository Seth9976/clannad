// 函数: sub_42e450
// 地址: 0x42e450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3
int32_t var_8 = arg2
int32_t* var_10 = esi
int32_t var_14 = 0
int32_t var_18 = 0

if (data_702fc0 != 0)
    void* eax = &data_13747c8
    int32_t i_3 = 0x200
    int32_t i
    
    do
        *eax = 0
        eax += 0x74
        i = i_3
        i_3 -= 1
    while (i != 1)
    esi = var_10

void* eax_1 = esi[0x14]
int32_t i_2 = 0

if (esi[0x15] s<= 0)
    esi[3] = 0
    esi[2] = 0
    return eax_1

uint32_t ecx = arg5
int32_t* ebx = eax_1 + 0x174
int32_t* var_c = ebx
int32_t i_1

do
    int32_t j_1 = 0
    
    if (*ebx s> 0)
        int32_t* ebx_1 = ebx[-1] + 0x2c
        int32_t* eax_3 = var_c
        int32_t j
        
        do
            int32_t k = 0
            
            if (*ebx_1 s> 0)
                char* esi_2 = ebx_1[-1] + 8
                
                do
                    if (*esi_2 == 0)
                        eax_3 = 0xffffffff
                    else
                        int32_t var_3c_1
                        uint32_t var_34_1
                        
                        if (arg4 != 0xffffffff)
                            eax_3 = ebx_1[-9]
                            
                            if (eax_3 s< arg4)
                                arg2 = var_8
                            
                            if (eax_3 s>= arg4 || eax_3 == var_c[-0x57])
                                if (data_12dc610 != 0 || data_1392700 == 0)
                                    eax_3 = var_10
                                
                                if ((data_12dc610 != 0 || data_1392700 == 0)
                                        && (eax_3[0xf] == 0 || data_1313c7c != 0))
                                    goto label_42e4eb
                                
                                int32_t var_30_3 = 0
                                var_34_1 = ecx
                                int32_t var_38_3 = 1
                                var_3c_1 = 0
                            else
                                int32_t var_30_2 = 0
                                var_34_1 = ecx
                                int32_t var_38_2 = 1
                                var_3c_1 = 0
                        else
                        label_42e4eb:
                            int32_t var_30_1 = 0
                            var_34_1 = ecx
                            int32_t var_38_1 = 1
                            var_3c_1 = 1
                        
                        eax_3 = sub_4254a0(eax_3, esi_2, ecx, arg2, 1, var_3c_1, 1, var_34_1)
                        ecx = arg5
                        arg2 = var_8
                    
                    *(esi_2 - 4) = eax_3
                    
                    if (eax_3 != 0xffffffff && data_702fc0 != 0 && eax_3 u<= 0x1ff)
                        eax_3 = eax_3 * 0x74 + &data_1374760
                        
                        if (eax_3[0x1a] == 0)
                            var_14 += 1
                            var_18 += eax_3[0x1b]
                            arg2 = var_8
                            eax_3[0x1a] = 1
                    
                    k += 1
                    esi_2 = &esi_2[0xb8]
                while (k s< *ebx_1)
                
                eax_3 = var_c
            
            ebx_1 = &ebx_1[0xc]
            j = j_1 + 1
            j_1 = j
        while (j s< *eax_3)
        ebx = var_c
        esi = var_10
    
    ebx = &ebx[0x5e]
    i_1 = i_2 + 1
    var_c = ebx
    i_2 = i_1
while (i_1 s< esi[0x15])
esi[3] = var_18
esi[2] = var_14
return var_18
