// 函数: sub_598180
// 地址: 0x598180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
char* esi = data_bac494
int32_t edi = *(esi + 0xc)

if (edi s<= 0 || arg1 s< 0 || edi s<= arg1)
    return 

char* ebx_1 = mods.dp.d(sx.q(*(esi + 8) + arg1), edi) * 0xbc

if (ebx_1[*(esi + 0x10)] != 2)
    int32_t i = 0
    
    if (edi s> 0)
        int32_t edx_3 = 0
        
        do
            char* edi_1 = *(esi + 0x10) + edx_3
            void* eax_5
            eax_5.b = *edi_1
            
            if (eax_5.b != 0)
                eax_5.b -= 1
                *edi_1 = eax_5.b
            
            i += 1
            edx_3 += 0xbc
        while (i s< *(esi + 0xc))

int32_t eax_6 = *(esi + 0x10)
*esi = 1
ebx_1[eax_6] = 2
sub_65ee30(*(esi + 0x10) + 0x14 + ebx_1)
sub_676610(0x30)
sub_676610(2)
