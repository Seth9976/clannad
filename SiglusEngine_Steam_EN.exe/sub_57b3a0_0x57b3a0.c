// 函数: sub_57b3a0
// 地址: 0x57b3a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = *(arg3 + 0x298)
int32_t esi = *(arg3 + 0x294)
*arg4 = 0
int32_t edi_1 = *(arg3 + 0x2a0) - 1
*arg5 = 0
int32_t edi_2 = edi_1 + ebx
int32_t ecx = data_70300c
int32_t esi_1 = esi + *(arg3 + 0x29c) - 1
int32_t ebx_2

if (ecx s<= esi)
    ebx_2 = 0
else
    ebx_2 = ecx - esi

int32_t* eax_5 = data_7030dc
void* var_c_1

if (eax_5 s<= ebx)
    var_c_1 = nullptr
else
    var_c_1 = eax_5 - ebx

if (arg2 == 6)
    void* edx_3
    edx_3.b = edi_2 s>= var_c_1
    arg2 = edx_3 + 2
else
    void* edx_2
    
    if (arg2 == 7)
        edx_2.b = esi_1 s>= ebx_2
        arg2 = edx_2 + 4
    else
        void* var_8_3 = arg2 - 8
        
        if (arg2 == 8)
            if (edi_2 s>= var_c_1)
                if (var_c_1 s>= esi_1)
                    edx_2.b = esi_1 s>= ebx_2
                    arg2 = edx_2 + 4
                else
                    int32_t edx_1
                    edx_1.b = var_c_1 s>= ebx_2
                    arg2 = (edx_1 << 1) + 3
            else if (edi_2 s>= esi_1)
                edx_2.b = esi_1 s>= ebx_2
                arg2 = edx_2 + 4
            else
                arg2 = 5
                
                if (edi_2 s< ebx_2)
                    arg2 = 2

int32_t ecx_2 = data_70300c

if (arg2 - 2 u<= 3)
    switch (arg2)
        case 2
            *arg5 = neg.d(edi_2)
            return arg5
        case 3
            if (eax_5 s<= ebx)
                *arg5 = 0
                return 0
            
            void* eax_7 = eax_5 - ebx
            *arg5 = eax_7
            return eax_7
        case 4
            *arg4 = neg.d(esi_1)
            return arg4
        case 5
            if (ecx_2 s> esi)
                *arg4 = ecx_2 - esi
                return arg4
            
            eax_5 = arg4
            *eax_5 = 0

return eax_5
