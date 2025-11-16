// 函数: sub_1a93473
// 地址: 0x1a93473
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ebx
int32_t var_8 = ebx

if (data_1c090dc == 0)
    return sub_1a93270(arg1, arg2.b)

sub_1a976dc(0x19)
void* esi_1 = arg1

while (true)
    ebx.w = zx.w(*esi_1)
    
    if (ebx.w == 0)
        break
    
    if ((*(zx.d(ebx.b) + 0x1c091e1) & 4) != 0)
        uint32_t eax_2
        eax_2.b = *(esi_1 + 1)
        esi_1 += 1
        
        if (eax_2.b == 0)
            __unlock(0x19)
            return nullptr
        
        if (arg2 == (zx.d(ebx.w) << 8 | zx.d(eax_2.b)))
            __unlock(0x19)
            return esi_1 - 1
    else if (arg2 == zx.d(ebx.w))
        break
    
    esi_1 += 1

__unlock(0x19)
int32_t eax_6 = arg2 - zx.d(ebx.w)
int32_t eax_7 = neg.d(eax_6)
return not.d(sbb.d(eax_7, eax_7, eax_6 != 0)) & esi_1
