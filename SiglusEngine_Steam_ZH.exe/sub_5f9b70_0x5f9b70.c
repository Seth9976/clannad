// 函数: sub_5f9b70
// 地址: 0x5f9b70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** eax = &arg1[3]
*arg1 = 0
arg1[2] = 0
bool cond:0 = eax[5] u< 8
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
arg1[0x28] = 0
sub_5be920(&arg1[0x29])
int32_t result = arg1[1]
arg1[0x57] = 0
void var_10

if (result != 0xb)
    if (result != 0x15)
        return result
    
    int32_t* esi_2 = *sub_58c640(&var_10, &arg1[0x58])
    sub_54b010(&var_10)
    return sub_55b650(esi_2)

int32_t* ebx = *sub_58c590(&var_10, &arg1[0x58])
int32_t* var_c

if (var_c != 0)
    bool cond:1_1 = var_c[1] != 1
    var_c[1]
    var_c[1] -= 1
    
    if (not(cond:1_1))
        (*(*var_c + 4))()
        int32_t edi_1 = var_c[2]
        var_c[2] -= 1
        
        if (edi_1 == 1)
            (*(*var_c + 8))()

return sub_55b2b0(ebx)
