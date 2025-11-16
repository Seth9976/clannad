// 函数: sub_5f1190
// 地址: 0x5f1190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
int32_t esi = arg3

if (esi s>= arg4)
    return 

int32_t edi_1 = esi * 0x15fc

do
    if (*(arg1 + 0xb8) == 0)
        sub_5e88c0(*(arg1 + 0xa4) + edi_1, arg2)
    else
        int32_t eax = data_bac510
        
        if (*(eax + (esi << 3) + 0x1e77c) != 0 && *(eax + (esi << 3) + 0x1e77d) != 0)
            sub_5e88c0(*(arg1 + 0xa4) + edi_1, arg2)
    
    esi += 1
    edi_1 += 0x15fc
while (esi s< arg4)
