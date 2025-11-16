// 函数: sub_49ab18
// 地址: 0x49ab18
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
char* edi_1 = nullptr
bool cond:0 = 0 != arg2
int32_t entry_ebx

if (0 u< arg2)
    char* esi_2 = entry_ebx - arg1
    
    do
        char ecx = *(esi_2 + arg1)
        char edx = *arg1
        
        if (ecx s< edx)
            return 0xffffffff
        
        if (ecx s> edx)
            return 1
        
        edi_1 = &edi_1[1]
        arg1 = &arg1[1]
    while (edi_1 u< arg2)
    
    cond:0 = edi_1 != arg2

if (not(cond:0) && edi_1[entry_ebx] != 0)
    return 1

return 0
