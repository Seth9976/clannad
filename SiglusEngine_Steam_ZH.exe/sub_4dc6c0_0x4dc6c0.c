// 函数: sub_4dc6c0
// 地址: 0x4dc6c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st2 = arg1
arg1 = _m_paddd(_m_psrldi(arg1 & data_b5b038, 0x17), arg2)
uint32_t eax = arg1[0]
int32_t result = eax & 0xffffff00

if (result == 0)
    _m_paddd(_m_pslldi(arg1, 0x17), st2 & data_b5b030)
    return result

if ((eax & 0x80000000) == 0)
    data_b5b040
    data_b5b028

return result
