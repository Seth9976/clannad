// 函数: sub_4c78a3
// 地址: 0x4c78a3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_220 = edi
int32_t* ebx
ebx.b = 0
bool cond:0 = arg1[2] u<= 0
char var_209 = 0
int32_t i = 0

if (not(cond:0))
    do
        void* ecx_1 = *(arg1[5] + (i << 2))
        int16_t eax_3 = (*(*(arg1[4] + (*(ecx_1 + 4) << 2)) + 4)).w
        
        if ((((eax_3.b & 0x10) != 0 && (eax_3:1.b & 2) == 0) || (eax_3.b & 0x20) != 0)
                && (*(*arg1 + 4))(ecx_1, 0) s< 0)
            sub_4c782e(arg1, &i)
            var_209 = 1
            ebx.b = 1
        
        i += 1
    while (i u< arg1[2])

int32_t result

if (cond:0 || ebx.b == 0)
    bool cond:1_1 = arg1[2] u<= 0
    i = 0
    
    if (not(cond:1_1))
        do
            int32_t eax_7 = arg1[5]
            void* edi_1 = *(eax_7 + (i << 2))
            int32_t edx_2 = *(edi_1 + 4)
            int16_t ecx_7 = (*(*(arg1[4] + (edx_2 << 2)) + 4)).w
            
            if (((ecx_7.b & 0x10) != 0 && (ecx_7:1.b & 2) == 0) || (ecx_7.b & 0x20) != 0)
                int32_t j = i + 1
                
                if (j u< arg1[2])
                    int32_t** eax_8 = eax_7 + (j << 2)
                    
                    do
                        ebx = *eax_8
                        
                        if (ebx[1] == edx_2 && ebx[0x1c] == *(edi_1 + 0x70)
                                && ebx[0x1b] == *(edi_1 + 0x6c)
                                && ((*ebx ^ *edi_1) & &data_1000000) != 0)
                            void var_108
                            sub_49f87a(arg1, edi_1, &var_108, 0x100)
                            void var_208
                            sub_49f87a(arg1, ebx, &var_208, 0x100)
                            void* var_224_2 = &var_208
                            void* var_228_4 = &var_108
                            sub_4a4100(arg1, *(edi_1 + 0x68), 0x1195, 
                                "Inconsistent semantic definition: %s and %s")
                            sub_4c782e(arg1, &i)
                            var_209 = 1
                            break
                        
                        j += 1
                        eax_8 = &eax_8[1]
                    while (j u< arg1[2])
                    
                    ebx.b = var_209
            
            i += 1
        while (i u< arg1[2])
    
    char temp0_1 = ebx.b
    ebx.b = neg.b(ebx.b)
    result = sbb.d(ebx, ebx, temp0_1 != 0) & 0x80004005
else
    result = 0x80004005

sub_745f2b(__security_cookie_1)
return result
