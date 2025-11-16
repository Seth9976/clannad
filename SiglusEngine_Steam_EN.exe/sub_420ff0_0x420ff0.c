// 函数: sub_420ff0
// 地址: 0x420ff0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_13125b4 == 0)
    return 

int32_t eax_2 = data_70300c - 1
int32_t eax_4 = data_7030dc - 1
int32_t eax_5
int32_t ecx_1
int32_t edx_1
int32_t esi_1
int32_t edi_1

if (data_1312798 != 0)
    eax_5 = data_131279c
    edi_1 = data_13127a0
    esi_1 = data_13127a4
    edx_1 = data_13127a8
    ecx_1 = data_13127ac
else
    eax_5 = data_1313294
    edi_1 = data_1313298
    esi_1 = data_131329c
    edx_1 = data_13132a0
    ecx_1 = data_13132a4

int32_t eax_9
int32_t ecx_3

if (ecx_1 == 0)
    edi_1 -= 0xff
    esi_1 -= 0xff
    ecx_3 = eax_5 - 0xff
    eax_9 = edx_1 * 0xff s/ 0xff
else
    ecx_3 = eax_5
    eax_9 = edx_1 * 0xff s/ 0xff
    
    if (ecx_3 s< 0)
        ecx_3 = 0
    else if (ecx_3 s> 0xff)
        ecx_3 = 0xff
    
    if (edi_1 s< 0)
        edi_1 = 0
    else if (edi_1 s> 0xff)
        edi_1 = 0xff
    
    if (esi_1 s< 0)
        esi_1 = 0
    else if (esi_1 s> 0xff)
        esi_1 = 0xff
    
    if (eax_9 s< 0)
        eax_9 = 0
    else if (eax_9 s> 0xff)
        eax_9 = 0xff

int32_t var_8_2 = ecx_1 - 1
void* edx_8 = data_702fec
int32_t var_28_1 = 0
int32_t var_2c_1 = eax_9
int32_t var_30_1 = 0

if (ecx_1 == 1)
    int32_t var_34_2 = 0
    int32_t var_58_1 = 0
    int32_t var_5c_1 = 0
    int32_t var_60_1 = 0
    int32_t var_64_1 = 0
    sub_586580(eax_9, edx_8, data_702fe8, data_702ff0, 0, 0, eax_2, eax_4, ecx_3.b, edi_1.b, 
        esi_1.b, data_702ff4, (data_702ff8).b, data_702ffc, data_703000, ecx_3, 0, 0, 0, 0)
else
    int32_t var_34_1 = esi_1
    int32_t var_38_1 = edi_1
    sub_58bcc0(eax_9, edx_8, data_702fe8, data_702ff0, 0, 0, eax_2, eax_4, data_702ff4, 
        (data_702ff8).b, data_702ffc, data_703000, ecx_3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        ecx_3)

int32_t* esi_2 = data_13127d8
int32_t eax

if (data_1312828 != 0 && data_1312824 != 0 && esi_2 u<= 0x1ff)
    eax = sub_425430(esi_2, 1)
    
    if (*(esi_2 * 0x74 + 0x13747b0) != 0)
        sub_424660(eax, &data_13127dc, esi_2 * 0x74 + 0x13747b0, 0, 0xffffffff, 0, 0)

if (data_13701cc == 0)
    return 

int32_t edx_9 = data_13126d4
int32_t eax_15 = edx_9 - data_13126fc
int32_t ecx_11 = data_13126d0
int32_t i_2 = 0

if (data_13126e0 s> 0)
    int32_t edi_3 = data_13701b0
    int32_t i
    
    do
        void* eax_17 = *(data_13701cc + (edi_3 << 3) + 4)
        void* esi_3 = *(eax_17 + 0x48)
        
        if (esi_3 != 0)
            int32_t j_3 = *(eax_17 + 0x50)
            int32_t j_4 = j_3
            
            if (j_3 s> 0)
                int32_t j_1 = j_3
                int32_t j_2 = j_3
                int32_t j
                
                do
                    if (*(esi_3 + 0x28) != 0)
                        int32_t eax_18 = *(esi_3 + 0x1c)
                        void* edx_12 = *(esi_3 + 0x24) + 0x2c + esi_3
                        
                        if (eax_18 == 0xffffffff)
                            int32_t var_28_3 = 0xff
                            int32_t var_2c_3 = data_703000
                            int32_t var_30_3 = data_702ffc
                            int32_t var_34_4 = data_702ff8
                            int32_t eax_29 = *(esi_3 + 0xc) + ecx_11
                            sub_584e80(eax_29, data_702fec, data_702fe8, data_702ff0, edx_12, 
                                *(esi_3 + 4), *(esi_3 + 8), 0, 0, 1, eax_29, 
                                *(esi_3 + 0x10) + eax_15, (data_702ff4).b)
                        else
                            int32_t* ecx_12
                            
                            if (edi_3 != data_1312728 || eax_18 != data_131272c)
                                ecx_12 = &data_13127bc
                            else
                                eax_18.b = *(esi_3 + 0x20)
                                ecx_12 = &data_13127c4
                                
                                if (eax_18.b != data_1312730)
                                    ecx_12 = &data_13127bc
                            
                            int32_t var_28_2 = 0
                            int32_t var_2c_2 = 0xff
                            int32_t var_30_2 = 0
                            int32_t var_34_3 = 0
                            int32_t var_38_2 = 0
                            int32_t eax_25 = *(esi_3 + 0xc) + ecx_11
                            sub_584980(eax_25, data_702fec, data_702fe8, data_702ff0, edx_12, 
                                *(esi_3 + 4), *(esi_3 + 8), 0, 0, 1, eax_25, 
                                *(esi_3 + 0x10) + eax_15, data_702ff4, (data_702ff8).b, 
                                data_702ffc, data_703000, ecx_12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                                zx.d(*ecx_12), zx.d(*(ecx_12 + 1)), zx.d(*(ecx_12 + 2)), 0xff, 
                                nullptr)
                        
                        j_1 = j_2
                    
                    esi_3 += *esi_3
                    j = j_1
                    j_1 -= 1
                    j_2 = j_1
                while (j != 1)
                void* eax_30 = eax_17
                int32_t j_5 = j_4
                void* esi_4 = *(eax_30 + 0x48)
                
                if (j_5 s> 0)
                    bool cond:7_1
                    
                    do
                        int32_t eax_31 = *(esi_4 + 0x1c)
                        
                        if (eax_31 == 0xffffffff || *(esi_4 + 0x29) != 0)
                            int32_t var_28_5 = 0xff
                            int32_t var_2c_5 = data_703000
                            int32_t var_30_5 = data_702ffc
                            int32_t var_34_6 = data_702ff8
                            int32_t eax_42 = *(esi_4 + 0xc) + ecx_11
                            sub_584e80(eax_42, data_702fec, data_702fe8, data_702ff0, esi_4 + 0x2c, 
                                *(esi_4 + 4), *(esi_4 + 8), 0, 0, 1, eax_42, 
                                *(esi_4 + 0x10) + eax_15, (data_702ff4).b)
                        else
                            int32_t* ecx_15
                            
                            if (edi_3 != data_1312728 || eax_31 != data_131272c)
                                ecx_15 = &data_13127b8
                            else
                                eax_31.b = *(esi_4 + 0x20)
                                ecx_15 = &data_13127c0
                                
                                if (eax_31.b != data_1312730)
                                    ecx_15 = &data_13127b8
                            
                            int32_t var_28_4 = 0
                            int32_t var_2c_4 = 0xff
                            int32_t var_30_4 = 0
                            int32_t var_34_5 = 0
                            int32_t var_38_4 = 0
                            int32_t eax_38 = *(esi_4 + 0xc) + ecx_11
                            sub_584980(eax_38, data_702fec, data_702fe8, data_702ff0, esi_4 + 0x2c, 
                                *(esi_4 + 4), *(esi_4 + 8), 0, 0, 1, eax_38, 
                                *(esi_4 + 0x10) + eax_15, data_702ff4, (data_702ff8).b, 
                                data_702ffc, data_703000, ecx_15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                                zx.d(*ecx_15), zx.d(*(ecx_15 + 1)), zx.d(*(ecx_15 + 2)), 0xff, 
                                nullptr)
                        
                        esi_4 += *esi_4
                        j_5 = j_4 - 1
                        cond:7_1 = j_4 != 1
                        j_4 = j_5
                    while (cond:7_1)
                    eax_30 = eax_17
                
                int32_t edx_18 = *(eax_30 + 0x38)
                
                if (edx_18 != 0xffffffff)
                    int32_t j_6 = j_5
                    void* eax_47 = *(eax_17 + 0x3c) + ecx_11
                    sub_4244c0(eax_47, edx_18, data_1312740, eax_47, *(eax_30 + 0x40) + eax_15)
        
        edi_3 += 1
        
        if (edi_3 == 0x3e8)
            edi_3 = 0
        
        i = i_2 + 1
        i_2 = i
    while (i s< data_13126e0)
    edx_9 = data_13126d4
    ecx_11 = data_13126d0

if (data_702fc0 != 0 && data_131270c != 0xffffffff)
    int32_t var_28_6 = 0
    int32_t var_2c_7 = 0x80
    int32_t var_30_7 = 0
    int32_t var_34_7 = 0
    int32_t eax_56 = data_1312710 + ecx_11
    sub_5860f0(eax_56, data_702fec, data_702fe8, data_702ff0, eax_56, data_1312714 + edx_9, 
        data_1312718 + ecx_11, data_131271c + edx_9, 0xff, 0xff, 0xff, data_702ff4, data_702ff8, 
        data_702ffc, data_703000, ecx_11, 0, 0, 0, 0, 0, 0, 0, 0)

eax = 0
char* i_1 = &data_1312824
int32_t var_18_3 = 0

do
    if (eax != 0)
        int32_t* edi_4 = *(i_1 - 0x4c)
        
        if (*(i_1 + 4) != 0 && *i_1 != 0 && edi_4 u<= 0x1ff)
            void* eax_57 = sub_425430(edi_4, 1)
            
            if (*(edi_4 * 0x74 + 0x13747b0) != 0)
                sub_424660(eax_57, &i_1[0xffffffb8], edi_4 * 0x74 + 0x13747b0, 0, 0xffffffff, 0, 0)
            
            eax = var_18_3
    
    eax += 1
    i_1 = &i_1[0x11c]
    var_18_3 = eax
while (i_1 s< 0x1313104)
