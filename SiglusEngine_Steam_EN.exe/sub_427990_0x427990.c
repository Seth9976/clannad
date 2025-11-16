// 函数: sub_427990
// 地址: 0x427990
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0xff)
    return 

int32_t eax_1 = arg1 * 5
sub_4d1ba0(eax_1, 0x24, (eax_1 << 3) + &data_9265b0, 0)
int32_t edi_1 = *((arg1 << 2) + &data_ef2af8)

if (edi_1 s>= 0 && edi_1 u<= 0x1ff)
    *(edi_1 * 0x74 + &data_13747ac) -= 1
    
    if (*(edi_1 * 0x74 + &data_13747ac) s<= 0)
        sub_4d6c40(edi_1 * 0x74 + 0x13747b0, edi_1 * 0x74 + 0x13747b4)
        sub_425320(edi_1)

bool cond:0_1 = data_702fc0 == 0
*((arg1 << 2) + &data_ef2af8) = 0xffffffff

if (not(cond:0_1))
    *((arg1 << 2) + &data_20c3e74) += 1
