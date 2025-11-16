// 函数: sub_6094f0
// 地址: 0x6094f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg3
int32_t esi_2 = arg5
void* var_8 = arg1
int32_t i_5 = (*(arg1 + 0x148) - *(arg1 + 0x144)) s/ 0x15fc
int32_t i_2 = i_5

if (i_5 s> 0)
    int32_t ebx_1 = 0
    int32_t i
    
    do
        void* ecx_1 = *(arg1 + 0x144) + ebx_1
        
        if (*(ecx_1 + 0xa0) != 0)
            int32_t eax_3 = *(ecx_1 + 0x12d8)
            int32_t edx_3 = *(ecx_1 + 0x12dc)
            
            if (edi s< eax_3)
            label_609558:
                
                if (eax_3 s< esi_2)
                label_609566:
                    sub_5ef110(ecx_1, arg2)
                    esi_2 = arg5
                    edi = arg3
                else if (eax_3 == esi_2 && edx_3 s<= arg6)
                    goto label_609566
            else if (edi == eax_3 && arg4 s<= edx_3)
                goto label_609558
        
        arg1 = var_8
        ebx_1 += 0x15fc
        i = i_2
        i_2 -= 1
    while (i != 1)

void* ebx_2 = var_8
void* result
int32_t edx_4
edx_4:result = muls.dp.d(0x4fba3d0b, *(arg1 + 0x43c) - *(ebx_2 + 0x438))
int32_t edx_5 = edx_4 s>> 0xb
int32_t i_3 = (edx_5 u>> 0x1f) + edx_5
void* edx_6 = data_bac498
int32_t i_4 = i_3

if (*(edx_6 + 2) == 0)
    result = data_bac484
    
    if (*(result + 0x138) == 0)
        result = data_bac458
        
        if (*(result + 0x37f) == 0 && i_3 s> 0)
            int32_t ebx_3 = 0
            int32_t i_1
            
            do
                void* edx_7 = *(var_8 + 0x438)
                result = *(edx_7 + ebx_3 + 0x124)
                void* edx_8 = edx_7 + ebx_3
                int32_t edx_9 = *(edx_8 + 0x128)
                
                if (edi s< result)
                label_609606:
                    
                    if (result s< esi_2)
                    label_609617:
                        result = sub_5d8100(edx_8, arg2)
                        esi_2 = arg5
                        edi = arg3
                        i_3 = i_4
                    else if (result == esi_2 && edx_9 s<= arg6)
                        goto label_609617
                else if (edi == result && arg4 s<= edx_9)
                    goto label_609606
                
                ebx_3 += 0x19b0
                i_1 = i_3
                i_3 -= 1
                i_4 = i_3
            while (i_1 != 1)
            edx_6 = data_bac498
            ebx_2 = var_8
    
    if (*(edx_6 + 2) == 0)
        result = data_bac484
        
        if (*(result + 0x138) == 0)
            result = data_bac458
            
            if (*(result + 0x37f) == 0)
                result = *(data_bac510 + 0xa2eb9c)
                
                if (edi s< result)
                label_609673:
                    
                    if (result s< esi_2)
                        return sub_5af680(ebx_2 + 0x4cc, arg2)
                    
                    if (result == esi_2 && arg6 s>= 0)
                        return sub_5af680(ebx_2 + 0x4cc, arg2)
                else if (edi == result && arg4 s<= 0)
                    goto label_609673

return result
