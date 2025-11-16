// 函数: sub_527290
// 地址: 0x527290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *(arg2 + 0x34)
void* ebx = nullptr
void* edi = nullptr
int32_t var_14 = 0
void* var_18 = nullptr

if (esi u<= 0x3f)
    edi = esi * 0x3920 + &data_f89afc
    ebx = &(&data_1090ae4)[esi * 0x75]
    var_18 = *(esi * 0x2d0 + 0x8fcae8)

sub_542980(esi)

if (esi == 0xffffffff)
    void* eax_2 = &data_8fcb20
    int32_t i_1 = 0x40
    int32_t i
    
    do
        *eax_2 = 0
        eax_2 += 0x2d0
        i = i_1
        i_1 -= 1
    while (i != 1)
else if (esi u<= 0x3f)
    *(esi * 0x2d0 + &data_8fcb20) = 0

if (edi != 0)
    if (data_13130c0:0xc == esi && data_13130c0.d != 0 && esi u<= 0x3f
            && *(esi * 0x3920 + &data_f89ba4) != 0)
        *(esi * 0x3920 + &data_f89bcc) += 1
    
    if (data_1b8ad80:0xc == esi && data_1b8ad80.d != 0 && esi u<= 0x3f
            && *(esi * 0x3920 + &data_f89ba4) != 0)
        *(esi * 0x3920 + &data_f89bcc) += 1

int32_t eax_10 = sub_5266b0(arg3 + 0x13b40, arg2 + 0x20, *(arg2 + 0x20), arg3 + 0x13b40, 
    &data_13130c0, esi, var_18, &var_14, 1)

if (eax_10 == 0)
    sub_526830(esi)
    sub_499600(&data_13130c0)
    return 0

char* var_3c_1
HWND eax_13

if (esi u> 0x3f)
    if (data_702fc0 == 0)
        sub_499600(&data_13130c0)
        return 0
    
    eax_13 = sub_55f1e0(sub_55ef70(eax_10, data_72d6ac, data_719b6c, 0x61f328, &data_61f30c), 
        data_72d6ac, data_719b6c, 0x61f328, &data_61f30c)
    var_3c_1 = &data_61f30c
label_527503:
    sub_55f390(eax_13, data_72d6ac, data_719b6c, 0x61f328, var_3c_1)
    sub_4a1e40(3)
    sub_499600(&data_13130c0)
    return 0

if (arg4 == 0 && *(ebx + 0xf4) == arg4)
    if (data_702fc0 == arg4)
        sub_499600(&data_13130c0)
        return 0
    
    eax_13 = sub_55f1e0(sub_55ef70(eax_10, data_72d6ac, data_719b6c, 0x61f328, "SEL "), 
        data_72d6ac, data_719b6c, 0x61f328, "SEL ")
    var_3c_1 = "SEL "
    goto label_527503

int32_t edi_2 = var_14
int32_t eax_14 = arg5

if (edi_2 != 0)
    eax_14 = 1

int32_t ecx_7 = *(arg2 + 0x34)

if (ecx_7 s>= 0)
    sub_5269c0(eax_14, arg4, &data_13130c0, eax_14, arg6, ecx_7)

data_13130dc = 0xffffffff
data_13130e0 = 0xffffffff
data_13130e4 = 0xffffffff
data_13130e8 = 0
*(esi * 0x3920 + &data_f8d300) = 0

if (arg7 != 0)
    *arg7 = edi_2

return 1
