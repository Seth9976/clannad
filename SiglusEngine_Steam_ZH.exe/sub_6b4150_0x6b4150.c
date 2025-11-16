// 函数: sub_6b4150
// 地址: 0x6b4150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t eax = arg2[4]
void* eax_1 = eax - 1
int32_t var_8_1 = 0

if (eax - 1 s>= 0)
    int32_t edi_1 = arg2[5]
    void* temp1_1
    
    do
        int32_t* ecx
        
        if (edi_1 u< 8)
            ecx = arg2
        else
            ecx = *arg2
        
        if (*(ecx + (eax_1 << 1)) == 0x5c)
            break
        
        int32_t* ecx_1
        
        if (edi_1 u< 8)
            ecx_1 = arg2
        else
            ecx_1 = *arg2
        
        if (*(ecx_1 + (eax_1 << 1)) == 0x2e)
            arg1[5] = 7
            arg1[4] = 0
            *arg1 = 0
            sub_52e3c0(arg1, arg2, 0, eax_1)
            return arg1
        
        temp1_1 = eax_1
        eax_1 -= 1
    while (temp1_1 - 1 s>= 0)

arg1[5] = 7
arg1[4] = 0
*arg1 = 0
sub_52e3c0(arg1, arg2, 0, 0xffffffff)
return arg1
