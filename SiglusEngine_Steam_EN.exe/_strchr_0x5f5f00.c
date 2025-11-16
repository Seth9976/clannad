// 函数: _strchr
// 地址: 0x5f5f00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_6410f8 u< 1)
    int32_t eax_4
    eax_4.b = arg2
    char* edx
    return sub_5f5f6e(eax_4, edx) __tailcall

uint32_t eax = zx.d(arg2)
int64_t xmm3_1 = _mm_shufflelo_epi16(zx.o(eax) | zx.o(eax << 8), 0)
char xmm3_2[0x10] = xmm3_1 | xmm3_1 << 0x40
int32_t ecx = 0xf & arg1
int32_t eax_2 = 0xffffffff << ecx.b
int128_t* edx_4 = arg1 - ecx
int32_t ecx_2

while (true)
    char xmm1_1[0x10] = *edx_4
    ecx_2 =
        _mm_movemask_epi8(_mm_cmpeq_epi8(zx.o(0), xmm1_1) | _mm_cmpeq_epi8(xmm1_1, xmm3_2)) & eax_2
    
    if (ecx_2 != 0)
        break
    
    eax_2 = 0xffffffff
    edx_4 = &edx_4[1]

int32_t eflags
void* eax_3
eax_3, eflags = _bit_scan_forward(ecx_2)
void* result = eax_3 + edx_4

if (xmm3_2[0] != *result)
    return nullptr

return result
