// 函数: sub_630af0
// 地址: 0x630af0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *arg1
int32_t eax = arg1[1]
arg1[1] = 0
*arg1 = 0
int32_t* esi = data_4ebe2f0
data_4ebe2ec = edx
data_4ebe2f0 = eax

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))()
        int32_t edi_1 = esi[2]
        esi[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi + 8))()

return &data_4ebe2ec
