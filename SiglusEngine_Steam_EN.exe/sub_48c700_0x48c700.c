// 函数: sub_48c700
// 地址: 0x48c700
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_8c4ac0.d
void* ecx = &data_72d6b0
int32_t i = 0
void* var_c = &data_72d6b0

if (data_7031bc s> 0)
    void* eax_4 = &data_98c178
    void* var_8_1 = &data_98c178
    
    do
        if (*(ecx + 0xc) != 8)
            sub_48c530(eax_4, eax_4 - 0x274, ecx, i)
            eax_4 = var_8_1
        else
            int32_t ecx_1 = *eax_4
            int32_t esi_1 = 0
            void* edi_1 = *(eax_4 + 8)
            
            if (ecx_1 s> 0)
                do
                    eax_4 = sub_48c600(eax_4, i, edi_1, esi_1)
                    esi_1 += 1
                    edi_1 += 0x7d8
                while (esi_1 s< ecx_1)
                
                eax_4 = var_8_1
        
        eax_4 += 0xf40
        ecx = var_c + 0xca0
        var_8_1 = eax_4
        i += 1
        var_c = ecx
    while (i s< data_7031bc)

int32_t result
result.b = *(&(&data_8c4ac0)[eax * 3]:4 + 4) != 0xffffffff
return result
