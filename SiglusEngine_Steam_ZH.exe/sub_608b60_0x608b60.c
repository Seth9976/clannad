// 函数: sub_608b60
// 地址: 0x608b60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
void* var_8 = edi
int32_t i_3 = (*(edi + 0x148) - *(edi + 0x144)) s/ 0x15fc
int32_t i_4 = i_3

if (i_3 s> 0)
    int32_t ebx_1 = 0
    int32_t var_c_1 = 0
    int32_t i
    
    do
        void* ebx_2 = ebx_1 + *(edi + 0x144)
        
        if (*(ebx_2 + 0xa0) != 0)
            sub_5f0720(ebx_2)
            int32_t j_1 = (*(ebx_2 + 0x1438) - *(ebx_2 + 0x1434)) s/ 0x15fc
            
            if (j_1 s> 0)
                int32_t esi_4 = 0
                int32_t j
                
                do
                    sub_5f06d0(*(ebx_2 + 0x1434) + esi_4)
                    esi_4 += 0x15fc
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                i_3 = i_4
            
            edi = var_8
        
        ebx_1 = var_c_1 + 0x15fc
        i = i_3
        i_3 -= 1
        var_c_1 = ebx_1
        i_4 = i_3
    while (i != 1)

int32_t result
int32_t edx_6
edx_6:result = muls.dp.d(0x4fba3d0b, *(edi + 0x43c) - *(edi + 0x438))
int32_t edx_7 = edx_6 s>> 0xb
int32_t i_2 = (edx_7 u>> 0x1f) + edx_7

if (i_2 s> 0)
    int32_t edi_3 = 0
    int32_t i_1
    
    do
        void* esi_5 = *(var_8 + 0x438)
        sub_5e3570(esi_5 + 0x234 + edi_3)
        result = sub_5e3570(esi_5 + 0xf28 + edi_3)
        edi_3 += 0x19b0
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
