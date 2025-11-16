// 函数: sub_443cff
// 地址: 0x443cff
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
char* edi_1 = arg2

if (edi_1 != 0)
    int32_t edi_2
    
    if (edi_1 s>= 0)
        edi_2 = sub_4538a9(arg1, edi_1, arg4, 0)
        
        if (edi_2 != 0)
            goto label_443d3b
    else
        edi_2 = not.d(edi_1)
    label_443d3b:
        int32_t* eax_3 = *(*(edi_2 + 4) + 0x10)
        
        if (*(edi_2 + 8) == 0xffffffff && eax_3 != 0 && arg3 u< eax_3)
            int32_t* esi_1 = *(edi_2 + 0x24)
            int32_t* var_8_1 = nullptr
            
            if (esi_1 != 0)
                while (esi_1[2] u< arg3)
                    var_8_1 = esi_1
                    esi_1 = esi_1[9]
                    
                    if (esi_1 == 0)
                        break
                
                if (esi_1 != 0 && esi_1[2] u<= arg3)
                    return not.d(esi_1)
            
            int32_t* eax_4 = sub_745f3f(0x28)
            
            if (eax_4 == 0)
                esi_1 = nullptr
            else
                eax_4[2] = 0xffffffff
                eax_4[9] = 0
                eax_4[8] = 0
                *eax_4 = 0
                eax_4[1] = 0
                esi_1 = eax_4
            
            if (esi_1 != 0)
                int32_t* eax_6 = *(arg1 + 0xb0) + (*(edi_2 + 0x14) << 2)
                int32_t ecx_6 = *(*eax_6 + 0x2c) + *(edi_2 + 0x18)
                int32_t var_10 = ecx_6
                int32_t var_14 = ecx_6
                char* ecx_9 = *(*eax_6 + 0x30) + *(edi_2 + 0x1c)
                char* var_c = ecx_9
                arg2 = ecx_9
                int32_t eax_8
                
                if (*(*eax_6 + 0x40) != 0)
                    eax_8 = *(*(arg1 + 0x38) + 0x10)
                else
                    eax_8 = *(arg1 + 0x20)
                
                int32_t eax_10 = sub_443c0f(eax_8, &var_10, &var_c)
                void* eax_13
                
                if (*(*(*(arg1 + 0xb0) + (*(edi_2 + 0x14) << 2)) + 0x40) != 0)
                    eax_13 = *(*(arg1 + 0x38) + 0x10)
                else
                    eax_13 = *(arg1 + 0x20)
                
                sub_443af4(eax_13, &var_14, &arg2)
                esi_1[4] = 3
                esi_1[5] = *(edi_2 + 0x14)
                esi_1[6] = *(edi_2 + 0x18)
                int32_t ecx_12 = *(edi_2 + 0x1c)
                esi_1[7] = divu.dp.d(
                    0:(arg2 - *(*(*(arg1 + 0xb0) + (*(edi_2 + 0x14) << 2)) + 0x30) - ecx_12), eax_3)
                    * arg3 + ecx_12
                esi_1[3] = divu.dp.d(0:eax_10, eax_3)
                esi_1[2] = arg3
                esi_1[1] = *(edi_2 + 4)
                esi_1[5]
                int32_t ecx_15
                
                if (*((*(arg1 + 0xb0))[esi_1[5]] + 0x40) != 0)
                    ecx_15 = *(*(arg1 + 0x38) + 0x10)
                else
                    ecx_15 = *(arg1 + 0x20)
                
                *esi_1 = *((*(arg1 + 0xb0))[esi_1[5]] + 0x30) + ecx_15 + esi_1[7]
                
                if (var_8_1 == 0)
                    esi_1[9] = *(edi_2 + 0x24)
                    *(edi_2 + 0x24) = esi_1
                else
                    esi_1[9] = var_8_1[9]
                    var_8_1[9] = esi_1
                
                return not.d(esi_1)

return 0
