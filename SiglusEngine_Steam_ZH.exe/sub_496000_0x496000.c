// 函数: sub_496000
// 地址: 0x496000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg3
uint64_t* eax = arg1
int32_t* edx = arg2

if (ecx s>= 4)
    while (true)
        if (ecx s< 4)
            if (ecx == 0)
                break
            
            edx += (ecx - 4) * 2
            eax += (ecx - 4) * 4
            ecx = 4
        else
            uint64_t st1 = zx.q(edx[1])
            int64_t st7 = data_b59000
            uint64_t st0 = _m_punpcklwd(zx.q(*edx), 0)
            st1 = _m_punpcklwd(st1, 0)
            uint64_t st2 = st0
            uint64_t st3 = st0
            uint64_t st4 = st1
            int64_t st5 = st1
            st0 &= st7
            st1 &= st7
            st7 = data_b59010
            st0 = _m_pcmpeqd(st0, 0)
            st1 = _m_pcmpeqd(st1, 0)
            uint64_t st6 = data_b59020
            st2 &= st6
            st4 &= st6
            int64_t temp0_5 = _m_paddd(st3 ^ st2, st7)
            int64_t temp0_6 = _m_paddd(st5 ^ st4, st7)
            st7 = st1
            st1 &= data_b59030
            int64_t temp0_7 = _m_paddd(temp0_5, st0 & data_b59030)
            int64_t temp0_8 = _m_paddd(temp0_6, st1)
            st6 = st0 & data_b59040
            st7 &= data_b59040
            st2 = _m_pslldi(st2, 0x10)
            st4 = _m_pslldi(st4, 0x10)
            st3 = _m_pslldi(temp0_7, 0xd)
            st5 = _m_pslldi(temp0_8, 0xd)
            int64_t temp0_13 = __pfsub_mmxq_mmxq(st3, st6)
            st5 = __pfsub_mmxq_mmxq(st5, st7) | st4
            *eax = temp0_13 | st2
            eax[1] = st5
            eax = &eax[2]
            edx = &edx[2]
            ecx -= 4
else if (ecx != 0)
    sub_401108(eax, edx, ecx)

__femms()
return arg1
