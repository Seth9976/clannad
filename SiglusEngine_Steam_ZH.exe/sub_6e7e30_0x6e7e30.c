// 函数: sub_6e7e30
// 地址: 0x6e7e30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg5 << 4
int32_t* edx = arg2 + eax_1
int32_t esi_1 = arg5 << 5
char* edi = arg6
int32_t eax_2 = *(esi_1 + arg3 + 0x70)
int32_t ecx_2 = eax_2 * edi + *(esi_1 + arg3 + 0x78)
void* edx_1 = *(arg3 + 0xd34c) + (ecx_2 << 2)
arg5 = edx_1
arg6 = *(arg3 + 0xd348) + ecx_2
int32_t ebx_1
ebx_1.b = edi s> 0
int32_t eax_7
eax_7.b = arg7 s< *(esi_1 + arg3 + 0x74)
_memset(edx_1 + ((neg.d(ebx_1) & eax_2) << 2), 0, ((eax_7 - ebx_1 - edi + arg7) * eax_2) << 2)
void* eax_17 = arg4 + eax_1
int32_t result_2 = (ebx_1 + (edi << 1)) << 2
int32_t result_1 = result_2
void* ecx_4 = *(eax_17 + 8)
int32_t ebx_2 = edx[2]
int32_t var_8 = ebx_2
arg4 = ecx_4
void* esi_4 = ebx_2 * result_2 + edx[3]
void* edi_4 = ecx_4 * result_2 + *(eax_17 + 0xc)
void* var_20 = edi_4
void* eax_19 = *edx
void* var_c = eax_19

if (result_2 s< 4)
    int32_t i_4 = 4 - result_2
    result_1 = 4 + 0
    int32_t i
    
    do
        sub_748840(esi_4, edi_4, eax_19)
        ecx_4 = arg4
        eax_19 = var_c
        esi_4 += ebx_2
        edi_4 += ecx_4
        i = i_4
        i_4 -= 1
    while (i != 1)
    var_20 = edi_4

int32_t eax_20
eax_20.b = eax_7 == 0
int32_t* result = result_1
int32_t edx_6 = (arg7 - eax_20) << 3

if (result s< edx_6)
    char* ebx_4 = arg6
    arg7 = ((edx_6 - result - 1) u>> 3) + 1
    void* edx_11 = arg5
    result_1 = &result[(((edx_6 - result - 1) u>> 3) + 1) * 2]
    void* i_1
    
    do
        int32_t ecx_8 = *(arg3 + (zx.d(*ebx_4) << 2) + 0xd148)
        void* eax_24 = edi_4 - arg4
        int32_t eax_28 = (ecx_8 * 3) s>> 2
        result = sub_6e7910(eax_28, var_8, esi_4, eax_24, arg4, ecx_8, eax_28, edx_11, 
            edx_11 + (eax_2 << 2))
        ebx_4 = &ebx_4[1]
        edx_11 = arg5 + 4
        arg6 = ebx_4
        arg5 = edx_11
        void* var_1c_1 = 8
        
        if (var_c s> 8)
            void* var_2c_1 = esi_4 - (var_8 << 2) + 4
            void* ecx_13 = 8
            
            do
                int32_t ebx_6 = *(arg3 + (zx.d(*ebx_4) << 2) + 0xd148)
                int32_t edi_6 = (ebx_6 * 3) s>> 2
                void* eax_35 = eax_24 + ecx_13
                sub_6e7910(eax_35, var_8, ecx_13 + esi_4, eax_35, arg4, ebx_6, edi_6, edx_11, 
                    edx_11 + (eax_2 << 2))
                result = sub_6e7c00(arg5 - 4, var_8, var_2c_1, ebx_6, edi_6, arg5 - 4)
                ecx_13 = var_1c_1 + 8
                edx_11 = arg5 + 4
                ebx_4 = &arg6[1]
                arg5 = edx_11
                arg6 = ebx_4
                var_1c_1 = ecx_13
                var_2c_1 += 8
            while (ecx_13 s< var_c)
            
            edi_4 = var_20
        
        edi_4 += ecx_4 << 3
        esi_4 += ebx_2 << 3
        i_1 = arg7
        arg7 -= 1
        var_20 = edi_4
    while (i_1 != 1)
    ebx_2 = var_8

if (eax_7 == 0)
    result = edx[1]
    
    if (result_1 s< result)
        arg7 = result - result_1
        void* i_2
        
        do
            result = sub_748840(esi_4, edi_4, var_c)
            edi_4 += arg4
            esi_4 += ebx_2
            i_2 = arg7
            arg7 -= 1
        while (i_2 != 1)
    
    char* edx_18 = &arg6[1]
    
    if (var_c s> 8)
        void* esi_6 = esi_4 - (ebx_2 << 3) + 4
        int32_t i_5 = ((var_c - 9) u>> 3) + 1
        void* ebx_9 = arg5
        int32_t i_3
        
        do
            int32_t ecx_20 = *(arg3 + (zx.d(*edx_18) << 2) + 0xd148)
            uint32_t eax_43 = (ecx_20 * 3) s>> 2
            result = sub_6e7c00(eax_43, var_8, esi_6, ecx_20, eax_43, ebx_9)
            edx_18 = &edx_18[1]
            ebx_9 += 4
            esi_6 += 8
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)

return result
