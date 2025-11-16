// 函数: sub_67d4b0
// 地址: 0x67d4b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_4 = arg1
int32_t ecx = *arg1

if (ecx s>= 0)
    int32_t eax_1 = data_4ebe33c
    *(eax_1 + (ecx << 2)) -= 1
    
    if (*(data_4ebe33c + (*arg1 << 2)) == 0)
        sub_59a180(&data_4ebe330, arg1)
    
    *arg1 = 0xffffffff

__builtin_memset(&arg1[1], 0, 0x37)
arg1[0xf] = 0
int32_t* edi = arg1[0x10]
arg1[0x10] = 0

if (edi == 0)
    return 

bool cond:0_1 = edi[1] != 1
edi[1]
edi[1] -= 1

if (cond:0_1)
    return 

(*(*edi + 4))()
int32_t esi_1 = edi[2]
edi[2] -= 1

if (esi_1 == 1)
    (*(*edi + 8))()
