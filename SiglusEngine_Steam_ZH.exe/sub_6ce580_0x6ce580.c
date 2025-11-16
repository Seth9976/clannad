// 函数: sub_6ce580
// 地址: 0x6ce580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
void* ebx = arg3
void* esi = arg2

if (ebx == 0 || esi == 0)
    return 

arg2.b = *(esi + 0x19)
int32_t eax

if (arg2.b != 3)
    eax = 0x100
else
    arg3.b = *(esi + 0x18)
    eax = 1 << arg3.b

if (arg5 s>= 0 && arg5 s<= eax)
    bool cond:1 = arg5 != 0
    
    if (arg5 s> 0)
        if (arg4 == 0)
            sub_6d42e0(ebx, "Invalid palette")
            noreturn
        
        cond:1 = arg5 != 0
    
    if (not(cond:1) && (*(ebx + 0x248) & 1) == 0)
        sub_6d42e0(ebx, "Invalid palette")
        noreturn
    
    sub_6cafa0(eax, esi, ebx, 0x1000, 0)
    char* eax_1 = sub_6d81b0(ebx, 0x300)
    *(ebx + 0x13c) = eax_1
    
    if (arg5 s> 0)
        sub_748840(eax_1, arg4, arg5 * 3)
    
    *(esi + 0xe8) |= 0x1000
    *(esi + 8) |= 8
    *(ebx + 0x140) = arg5.w
    *(esi + 0x14) = arg5.w
    *(esi + 0x10) = eax_1
    return 

if (arg2.b == 3)
    sub_6d42e0(ebx, "Invalid palette length")
    noreturn

sub_6d4470(ebx, "Invalid palette length")
