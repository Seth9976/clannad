// 函数: sub_712c60
// 地址: 0x712c60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg4
void* ebx = arg2
int32_t var_8 = arg3
void* var_c = ebx
void* esi = (ebx << 1) + 2
bool cond:0 = esi != eax

while (esi s< eax)
    int32_t ecx = arg3 + esi * 0x68
    
    if (arg6(ecx, ecx - 0x68) != 0)
        esi -= 1
    
    void* edi_2 = esi * 0x68 + var_8
    void* ebx_2 = ebx * 0x68 + var_8
    
    if (ebx_2 + 4 != edi_2 + 4)
        sub_541b40(ebx_2 + 4, edi_2 + 4, 0, 0xffffffff)
    
    if (ebx_2 + 0x1c != edi_2 + 0x1c)
        sub_541b40(ebx_2 + 0x1c, edi_2 + 0x1c, 0, 0xffffffff)
    
    if (ebx_2 + 0x34 != edi_2 + 0x34)
        sub_541b40(ebx_2 + 0x34, edi_2 + 0x34, 0, 0xffffffff)
    
    if (ebx_2 + 0x4c != edi_2 + 0x4c)
        sub_541b40(ebx_2 + 0x4c, edi_2 + 0x4c, 0, 0xffffffff)
    
    arg3 = var_8
    *(ebx_2 + 0x64) = *(edi_2 + 0x64)
    ebx = esi
    eax = arg4
    esi = (esi << 1) + 2
    cond:0 = esi != eax

if (not(cond:0))
    void* edi_4 = eax * 0x68 + arg3
    void* esi_2 = ebx * 0x68 + arg3
    
    if (esi_2 + 4 != edi_4 - 0x64)
        sub_541b40(esi_2 + 4, edi_4 - 0x64, 0, 0xffffffff)
    
    if (esi_2 + 0x1c != edi_4 - 0x4c)
        sub_541b40(esi_2 + 0x1c, edi_4 - 0x4c, 0, 0xffffffff)
    
    if (esi_2 + 0x34 != edi_4 - 0x34)
        sub_541b40(esi_2 + 0x34, edi_4 - 0x34, 0, 0xffffffff)
    
    if (esi_2 + 0x4c != edi_4 - 0x1c)
        sub_541b40(esi_2 + 0x4c, edi_4 - 0x1c, 0, 0xffffffff)
    
    eax = *(edi_4 - 4)
    ebx = arg4 - 1
    *(esi_2 + 0x64) = eax

return sub_712da0(eax, ebx, var_8, var_c, arg5, arg6)
