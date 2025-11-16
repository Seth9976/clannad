// 函数: sub_4dc680
// 地址: 0x4dc680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t st1[0x2] = arg1
int64_t st3 = data_b5b008
arg1 = (arg1 & data_b5b030) | data_b5b000
int64_t st2 = data_b5b048
uint32_t temp0[0x2] = _m_psrldi(st1 & data_b5b028, 0x17)
_m_punpckldq(__pfmul_mmxq_mmxq(arg1, st3), _m_psubd(temp0, st2)[0])
