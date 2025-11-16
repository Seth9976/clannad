// 函数: sub_437693
// 地址: 0x437693
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* i = arg2
int32_t edi
int32_t var_c = edi

while (i != 0)
    int32_t eax_1 = *(i + 4)
    
    if (eax_1 == 1)
        if (sub_437693(*(i + 8)) != 0)
            return 1
        
        i = *(i + 0xc)
    else if (eax_1 == 6)
        i = *(i + 0x18)
    else if (eax_1 == 8)
        i = *(i + 0x10)
    else
        if (eax_1 == 9)
            return *(i + 0x20) & 0x200
        
        if (eax_1 != 0xb)
            sub_437200(arg1, nullptr, 0, "internal error: unknown node")
            break
        
        i = *(i + 0x20)

return 0
