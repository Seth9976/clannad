// 函数: sub_5e4150
// 地址: 0x5e4150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_6efe60(&arg1[0x234])
arg1[0x27c] = 0
arg1[0x27d] = 0
arg1[0x27e] = 0
arg1[0x27f] = 0
sub_6efdb0(&arg1[0x234])
arg1[0x1e6] = 0
int32_t* esi_1 = arg1[0x1e7]
arg1[0x1e7] = 0

if (esi_1 != 0)
    bool cond:0_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi_1 + 4))()
        int32_t ebx_1 = esi_1[2]
        esi_1[2] -= 1
        
        if (ebx_1 == 1)
            (*(*esi_1 + 8))()

int32_t result = *arg1

if (result s< 0)
    return result

void** eax_7 = data_bac510 + 0x207a0 + result * 0xa0e4

if (&arg1[0x2e] != eax_7)
    sub_52e3c0(&arg1[0x2e], eax_7, 0, 0xffffffff)

return sub_5e4300(arg1) __tailcall
