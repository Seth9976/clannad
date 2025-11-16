// 函数: sub_4bcee1
// 地址: 0x4bcee1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_30 = edi
int32_t var_24 = 0
void var_20
void* edi_1 = &var_20
*edi_1 = 0
void* edi_2 = edi_1 + 4
*edi_2 = 0
*(edi_2 + 4) = 0
*(arg1 + 0x218) = 0
*(arg1 + 0x21c) = 0
int32_t esi = 0
int32_t edx = 0
__builtin_memset(arg1 + 0x1f8, 0, 0x20)
int32_t var_c = 0
int32_t var_10 = 0
void* var_14 = nullptr
int32_t i = 0

if (*(arg1 + 8) u> 0)
    do
        void* esi_1 = *(*(arg1 + 0x14) + (i << 2))
        void* edi_9 = *(*(arg1 + 0x10) + (*(esi_1 + 4) << 2))
        
        if (*(esi_1 + 8) != 0xffffffff && var_c == 0)
            sub_4a4100(arg1, *(esi_1 + 0x60), 0x119f, "relative addressing not supported in ps_1_x")
            var_c = 1
            edx = 1
        
        int16_t eax_3 = (*(edi_9 + 4)).w
        
        if ((eax_3.b & 0x20) != 0)
            uint32_t edi_10 = zx.d(*(esi_1 + 0x6d))
            
            if (edi_10 u> 3)
                break
            
            uint32_t eax_5 = zx.d((*(esi_1 + 0x6c)).b)
            
            if (eax_5 == 1)
                if (edi_10 == 0)
                    (&var_24)[*(esi_1 + 0x10)] = 1
                    var_14 = *(esi_1 + 0x60)
            else if (eax_5 == 2 && edi_10 == 0 && *(esi_1 + 0x10) != edi_10 && var_10 == edi_10)
                sub_4a4100(arg1, *(esi_1 + 0x60), 0x11b0, "DEPTH must be a scalar")
                var_10 = 1
                edx = 1
        else if ((eax_3.b & 0x10) != 0 && (eax_3:1.b & 2) == 0)
            uint32_t eax_10 = zx.d(*(esi_1 + 0x6d))
            uint32_t ecx_3 = zx.d((*(esi_1 + 0x6c)).b)
            void* eax_11
            
            if (ecx_3 == 1)
                if (eax_10 u< 2)
                    eax_11 = arg1 + (eax_10 << 2) + 0x218
                label_4bd00d:
                    int32_t ecx_7 = *(esi_1 + 0x10) + 1
                    
                    if (*eax_11 u< ecx_7)
                        *eax_11 = ecx_7
            else if (ecx_3 == 3 && eax_10 u< 8)
                eax_11 = arg1 + (eax_10 << 2) + 0x1f8
                goto label_4bd00d
        
        i += 1
    while (i u< *(arg1 + 8))
    
    esi = 0

for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
    int32_t ecx_8
    ecx_8.b = (&var_24)[i_1] != 0
    esi += ecx_8

if (esi != 4)
    sub_4a4100(arg1, var_14, 0x11b2, 
        "pixel shader must minimally write all four components of COLOR0")
    edx = 1

int32_t eax_14 = neg.d(edx)
return sbb.d(eax_14, eax_14, edx != 0) & 0x80004005
