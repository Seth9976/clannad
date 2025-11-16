// 函数: sub_539a00
// 地址: 0x539a00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = data_bac4e4
void* edi = data_bac510
void** eax = edi + 0xbba8
int32_t edx = eax[4]

if (*(edi + 0xbbbc) u>= 8)
    eax = *eax

int32_t var_10 = edx

if (sub_536340(ebx + 0x11c, ebx + 0x11c, *(ebx + 0x12c), eax) != 0)
    ebx.b = 1
else
    int32_t eax_1
    eax_1.b = *(ebx + 0x134)
    
    if (eax_1.b != *(edi + 0xbbc4) || *(ebx + 0x138) != *(edi + 0xbbc8))
        ebx.b = 1
    else
        ebx.b = 0

sub_60cb50()
LRESULT result = sub_539ab0(arg1)

if (ebx.b != 0)
    result = sub_675f90(0)

if (*(arg1 + 8) == 0)
    return result

void** eax_4 = data_bac4e4 + 0x11c

if (arg1 + 0x71c != eax_4)
    sub_52e3c0(arg1 + 0x71c, eax_4, 0, 0xffffffff)

return sub_539e60(arg1) __tailcall
