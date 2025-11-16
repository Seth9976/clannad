// 函数: sub_459162
// 地址: 0x459162
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t* eax = esi[3]
esi[0x2b] = 0
esi[0x18] = 1

if ((*(*eax + 0x98))(eax, 0, &arg1) s>= 0)
    int32_t* eax_2 = arg1
    int32_t var_34
    (*(*eax_2 + 0x30))(eax_2, &var_34)
    int32_t* eax_3 = esi[3]
    void var_14
    (*(*eax_3 + 0x20))(eax_3, 0, &var_14)
    int32_t* eax_4 = esi[2]
    int32_t var_8
    
    if ((*(*eax_4 + 0x28))(eax_4, esi[0x11], esi[0x10], var_8, 0x80001, 1, var_34) s< 0)
        esi[0x18] = 0
    
    int32_t* eax_6 = arg1
    
    if (eax_6 != 0)
        (*(*eax_6 + 8))(eax_6)

return 0
