// 函数: sub_4997bf
// 地址: 0x4997bf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t edi
int32_t var_c = edi
int32_t edi_1 = 1

if ((esi[0x43].b & 0x20) == 0)
    if ((*(esi + 0x5d) & 8) != 0)
        edi_1 = 0
else if ((esi[0x17] & 0x300) == 0x300)
    edi_1 = 0

sub_468e37(esi, &arg1, 4)

if (edi_1 == 0)
    return 0

int32_t result
result.b = sub_499762(&arg1) != esi[0x40]
return result
