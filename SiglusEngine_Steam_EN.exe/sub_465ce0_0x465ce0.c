// 函数: sub_465ce0
// 地址: 0x465ce0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = data_7031bc
int32_t esi = 0
int32_t var_8 = arg1

if (ebx s<= 0)
    return 

int32_t edx_1 = data_131310c
int32_t* eax = arg1 * 0x7a0 + 0x98c180
int32_t* var_c_1 = eax
void* edi_3 = arg1 * 0x650 + 0x72d904

do
    if (*(edi_3 - 0x248) != 8)
        *edi_3 = 0
        *(edi_3 + 0xc) = edx_1
    else
        int32_t edx_2
        
        if (esi s< 0 || esi s>= ebx)
            edx_2 = arg1
        label_465d8d:
            sub_476410(eax, edx_2, esi, 0)
            ebx = data_7031bc
            edx_1 = data_131310c
            eax = var_c_1
        else
            void* ecx = *eax
            
            if (ecx == 0)
                edx_2 = var_8
                goto label_465d8d
            
            int32_t i_1 = eax[-2]
            
            if (i_1 s> 0)
                void* eax_3 = ecx + 0x3e4
                int32_t i
                
                do
                    *(eax_3 - 0xc) = 0
                    eax_3 += 0x7d8
                    *(eax_3 - 0x7d8) = edx_1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                eax = var_c_1
        arg1 = var_8
    
    esi += 1
    eax = &eax[0x3d0]
    edi_3 += 0xca0
    var_c_1 = eax
while (esi s< ebx)
