// 函数: sub_6e13d0
// 地址: 0x6e13d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

(*(*arg1 + 8))()
*(arg1[5] + 0x2d4) = arg3
void** eax_2 = arg2

if (eax_2[5] u>= 8)
    eax_2 = *eax_2

__wfopen_s(arg1[5] + 0x2d0, eax_2, &data_af335c)
void* ecx = arg1[5]

if (*(ecx + 0x2d0) != 0)
    *(ecx + 0x2d8) = arg4
    void* eax_7 = arg1[5]
    sub_74bce9(*(eax_7 + 0x2d0), *(eax_7 + 0x2d4), FILE_BEGIN)
    int32_t* ecx_1 = arg1[5]
    int32_t* var_48_1 = ecx_1
    int32_t (* var_10_1)(int32_t** arg1, void* arg2, int32_t* arg3, int32_t arg4) = sub_6e12c0
    int32_t (* var_c_1)(int32_t* arg1) = sub_6e12a0
    void* (* var_8_1)(int32_t* arg1) = sub_6e1350
    var_48_1.o = sub_6e1250.o
    int32_t __saved_ebp
    
    if (sub_744a20(&__saved_ebp, &ecx_1[0xb4], ecx_1, nullptr, nullptr, var_48_1) s>= 0)
        if (CDebugSSectionWriter::countofLinesInLineBlock(arg1[5]) == 0)
            (*(*arg1 + 8))()
            int32_t eax_13
            eax_13.b = 0
            return eax_13
        
        int128_t* eax_14 = sub_7449e0(arg1[5], 0xffffffff)
        uint32_t (* var_14_1)(void* arg1, int32_t arg2, uint32_t arg3, int32_t* arg4)
        var_14_1.o = *eax_14
        int128_t var_24 = eax_14[1]
        void* eax_15 = sub_745590(arg1[5], 0xffffffff)
        uint128_t xmm1 = var_14_1.o
        arg1[2] = 0x10
        int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 8)
        int32_t xmm0_5 = _mm_bsrli_si128(xmm1, 4)
        arg1[3] = xmm1_1
        arg1[1] = xmm0_5
        int32_t edx_2 = xmm0_5 * eax_15
        eax_15.b = 1
        arg1[4] = edx_2 * 2
        return eax_15
    
    _fclose(*(arg1[5] + 0x2d0))
    sub_6e1370(arg1)

void* eax_5
eax_5.b = 0
return eax_5
