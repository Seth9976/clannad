// 函数: sub_6dfcc0
// 地址: 0x6dfcc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = data_4ebe304
int32_t eax

if (arg1 u< ecx)
    eax = data_4ebe300

if (arg1 u>= ecx || eax u> arg1)
    if (ecx == data_4ebe308)
        int32_t* var_c_2 = ecx
        sub_6dfd40()
        ecx = data_4ebe304
    
    if (ecx != 0)
        *ecx = *arg1
        ecx = data_4ebe304
else
    int32_t esi_2 = (arg1 - eax) s>> 2
    
    if (ecx == data_4ebe308)
        int32_t* var_c_1 = ecx
        sub_6dfd40()
        ecx = data_4ebe304
        eax = data_4ebe300
    
    if (ecx != 0)
        *ecx = *(eax + (esi_2 << 2))
        ecx = data_4ebe304

data_4ebe304 = &ecx[1]
