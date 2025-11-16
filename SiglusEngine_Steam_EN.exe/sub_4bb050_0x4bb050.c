// 函数: sub_4bb050
// 地址: 0x4bb050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_7c
int32_t eax_1 = __security_cookie ^ &var_7c
int32_t i_3 = 0
uint32_t edi = 0
void* var_60 = nullptr
int32_t esi = arg3
int32_t var_68 = 0
char* var_44 = nullptr
int32_t* i = &data_2074454
int32_t var_58 = esi
int32_t var_3c = 0
int32_t i_2 = 0
int32_t var_6c = 0

do
    i[-1] = 0x1001
    *i = 0x1001
    i[1] = 0x1001
    i = &i[3]
while (i s< &data_208046c)

data_2080450 = 0
data_2080458 = 0
data_2074450 = 0x1000
data_2074454 = 0x1001
data_2074458 = 0x1001
int32_t result_1 = 8
int32_t var_70 = 0
var_7c = 1
char var_28[0x1c]
var_28[0] = 0
HGLOBAL hMem_1 = GlobalAlloc(GHND, 0x40000)
HGLOBAL hMem = hMem_1
uint32_t dwBytes = 0x40000
int32_t ecx = GlobalLock(hMem_1) + 8
int32_t eax_4 = arg2
int32_t var_78 = ecx
int32_t result

if (eax_4 s<= 0)
    result = 8
else
    char* edx = nullptr
    
    while (true)
        if (i_2 s> 0)
            int32_t ebx = var_6c
            void* eax_5 = eax_4 - edx
            int32_t i_4
            int32_t i_1
            
            do
                var_60 = &edx[1]
                int32_t eax_8
                int32_t edx_2
                edx_2:eax_8 = sx.q(&edx[1])
                int32_t ebx_2 = (ebx + 1) & 0xfff
                var_6c = ebx_2
                int32_t eax_10 = (eax_8 + (edx_2 & 0xfff)) s>> 0xc
                sub_4baed0(ebx_2)
                void* eax_11 = var_60
                void* ecx_2 = 0x11
                int32_t ebx_3 = data_2080458
                
                if (eax_5 - 1 s< 0x11)
                    ecx_2 = eax_5 - 1
                
                void* edx_5 = eax_11 & 0xfff
                int32_t var_34_1 = ebx_3
                i_4 = 0
                void* var_4c_1 = ecx_2
                
                while (true)
                    void* edx_6 = eax_11 + esi
                    int32_t esi_2
                    
                    if (ebx_3 s<= edx_5)
                        esi_2 = (eax_10 << 0xc) + ebx_3 + var_58
                    else
                        esi_2 = esi - 0x1000 + (eax_10 << 0xc) + ebx_3
                    
                    int32_t i_5 = 0
                    
                    if (ecx_2 s> 0)
                        void* esi_6 = esi_2 - edx_6
                        
                        do
                            uint32_t ecx_3 = zx.d(*(esi_6 + edx_6))
                            edx_6 += 1
                            uint32_t edi_1 = zx.d(*(edx_6 - 1))
                            edi = edi_1 - ecx_3
                            
                            if (edi_1 != ecx_3)
                                break
                            
                            i_5 += 1
                        while (i_5 s< var_4c_1)
                        
                        ebx_3 = var_34_1
                        ecx_2 = var_4c_1
                    
                    if (i_5 s> i_4)
                        i_4 = i_5
                        var_3c = ebx_3
                        
                        if (i_5 s>= ecx_2)
                            int32_t edx_7 = ebx_3 * 3
                            int32_t eax_18 = (&data_2074450)[edx_7] * 3
                            ebx = var_6c
                            
                            if ((&data_2074454)[eax_18] != ebx_3)
                                (&data_2074458)[eax_18] = ebx
                            else
                                (&data_2074454)[eax_18] = ebx
                            
                            int32_t ecx_5 = ebx * 3
                            *((ecx_5 << 2) + &data_2074450) = *((edx_7 << 2) + &data_2074450)
                            (&data_2074458)[ecx_5] = (&data_2074458)[edx_7]
                            (&data_2074450)[(&data_2074454)[ecx_5] * 3] = ebx
                            (&data_2074450)[(&data_2074458)[ecx_5] * 3] = ebx
                            (&data_2074450)[edx_7] = 0x1001
                            break
                    
                    int32_t eax_15 = ebx_3 * 3
                    void* ecx_4 = &(&data_2074458)[eax_15]
                    
                    if (edi s< 0)
                        ecx_4 = &(&data_2074454)[eax_15]
                    
                    int32_t eax_16 = *ecx_4
                    
                    if (eax_16 == 0x1001)
                        *ecx_4 = var_6c
                        int32_t eax_25 = var_6c * 3
                        (&data_2074450)[eax_25] = ebx_3
                        ebx = var_6c
                        (&data_2074458)[eax_25] = 0x1001
                        (&data_2074454)[eax_25] = 0x1001
                        break
                    
                    ecx_2 = var_4c_1
                    ebx_3 = eax_16
                    esi = var_58
                    var_34_1 = eax_16
                    eax_11 = var_60
                
                i_1 = i_2
                i_2 -= 1
                esi = var_58
                edx = var_60
                eax_5 -= 1
            while (i_1 != 1)
            i_3 = i_4
            ecx = var_78
            eax_4 = arg2
        
        if (edx s>= eax_4)
            int32_t eax_37 = var_70
            result = result_1
            
            if (eax_37 == 0)
                eax_4 = arg2
                break
            
            int32_t ebx_5 = var_7c
            result += ebx_5
            
            if (dwBytes u> result)
                goto label_4bb4c8
            
            GlobalUnlock(hMem)
            HGLOBAL hMem_3 = GlobalReAlloc(hMem, dwBytes + 0x40000, 2)
            hMem = hMem_3
            
            if (hMem_3 != 0)
                eax_37 = GlobalLock(hMem_3)
                ecx = eax_37 + result_1
                var_78 = ecx
            label_4bb4c8:
                sub_4d1c30(eax_37, &var_28, ecx, ebx_5)
                ecx = var_78 + ebx_5
                var_28[0] = 0
                eax_4 = arg2
                break
        else
            if (i_3 s> 1)
                var_70 += 1
                i_2 = i_3
                int32_t eax_29 = var_7c
                *(&var_28 + eax_29) = (((var_6c - var_3c) << 4).w & 0xfff0) | (i_3.w - 2)
                var_7c = eax_29 + 2
            else
                i_2 = 1
                var_28[0] |= *((var_70 << 2) + &data_610a50)
                var_70 += 1
                int32_t ecx_8 = var_7c
                var_28[ecx_8] = edx[esi]
                var_7c = ecx_8 + 1
            
            int32_t eax_32 = var_68 + 1
            var_68 = eax_32
            
            if (eax_32 s>= 0x2800)
                var_68 = 0
                var_44 = edx
            else if (edx - var_44 s>= arg2 s>> 3)
                var_68 = 0
                var_44 = edx
            
            ecx = var_78
            eax_4 = arg2
            
            if (var_70 != 8)
                continue
            else
                int32_t eax_35 = var_7c
                int32_t result_2 = result_1 + eax_35
                int32_t ecx_20
                
                if (dwBytes u> result_2)
                    ecx_20 = var_78
                label_4bb434:
                    sub_4d1c30(eax_35, &var_28, ecx_20, eax_35)
                    edx = var_60
                    ecx = var_78 + eax_35
                    var_68 += 1
                    eax_4 = arg2
                    result_1 = result_2
                    esi = var_58
                    var_78 = ecx
                    var_70 = 0
                    var_7c = 1
                    var_28[0] = 0
                    continue
                else
                    dwBytes += 0x40000
                    GlobalUnlock(hMem)
                    HGLOBAL hMem_2 = GlobalReAlloc(hMem, dwBytes, 2)
                    hMem = hMem_2
                    
                    if (hMem_2 != 0)
                        int32_t eax_36 = GlobalLock(hMem_2)
                        eax_35 = var_7c
                        ecx_20 = eax_36 + result_1
                        var_78 = ecx_20
                        goto label_4bb434
        
        GlobalUnlock(nullptr)
        GlobalFree(nullptr)
        sub_5f02dd(eax_1 ^ &var_7c)
        return 0

int32_t* ecx_26 = ecx - result
*ecx_26 = result
ecx_26[1] = eax_4
GlobalUnlock(hMem)
*arg4 = hMem
sub_5f02dd(eax_1 ^ &var_7c)
return result
