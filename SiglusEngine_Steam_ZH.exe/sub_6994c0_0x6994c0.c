// 函数: sub_6994c0
// 地址: 0x6994c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_8_1 = arg1

if (arg3 == 0)
    return &arg3[0xd]

uint32_t cbData = 0
uint8_t* edx = arg3
int16_t* eax_2
void* edi_1

do
    eax_2 = edx
    edi_1 = &eax_2[1]
    
    do
        arg1.w = *eax_2
        eax_2 = &eax_2[1]
    while (arg1.w != 0)
    
    edx = &edx[(((eax_2 - edi_1) s>> 1) + 1) << 1]
    cbData += (((eax_2 - edi_1) s>> 1) + 1) << 1
while ((eax_2 - edi_1) s>> 1 != 0)
return RegSetValueExW(*var_8_1, arg2, 0, REG_MULTI_SZ, arg3, cbData)
