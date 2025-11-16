// 函数: sub_48dd10
// 地址: 0x48dd10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1311178 != 0)
    return 

BOOL eax
sub_4d1c30(eax, 0x703520, 0x13111ac, 0x1378)
data_131117c = data_131310c
data_1311180 = data_1392710
data_1311184 = data_1392ccc
int32_t esi_1 = data_703728
data_1311188 = data_1b8c21c
int32_t edi_1 = data_1311178
data_131118c = data_1b8c218
data_1311190 = data_1af0a0c
data_1311194 = data_1af0a08
data_1311198 = data_1b8c214
data_131119c = data_187c514
data_13111a0 = data_187a5cc
data_13111a4 = data_187c510
data_13111a8 = data_187a5c8
data_1312524 = data_187a5c0
data_1312528 = data_1af172c
data_131252c = data_139319c

if (esi_1 == 0)
    esi_1 = 0
else if (edi_1 == 0)
    int32_t ecx_1
    ecx_1.b = 0
    
    if (sub_485d20(ecx_1) == 0)
        esi_1 = 2
else
    esi_1 = data_1312530

int32_t eax_17 = data_703710
data_1312530 = esi_1

if (eax_17 != 0)
    if (edi_1 != 0)
        eax_17 = data_1312538
    else if (data_7037c8 == 0 || data_703674 != 0)
        eax_17 = 2
    else
        int32_t ecx_2 = data_108f354
        
        if (ecx_2 != 1)
            if (ecx_2 == 2 && data_13132e0 == 0 && data_703678 != ecx_2)
                eax_17 = 2
        else if (data_703678 != 2)
            eax_17 = 2

data_1312538 = eax_17
data_1312540 = sub_4862e0()
data_1312548 = data_1af17b8
data_131254c = data_976fb0:4
data_1312550 = data_976fb0:8
data_1312554 = data_976fb0:0xc
data_1312558 = data_976fc0
data_131255c = data_108f31c
data_131255d = data_108f31d
data_1312560 = data_703660
data_1312564 = data_703668
data_1312568 = zx.d(data_703664)
int32_t eax_29 = data_13130c0:0xc
data_1312534 = 0
data_131253c = 0
data_1312544 = 0
data_976fb0:4 = 0
data_976fb0:8 = 0
data_976fb0:0xc = 0
data_976fc0 = 0
data_108f31c.w = 0

if (eax_29 u<= 0x3f && *(eax_29 * 0x3920 + &data_f89ba4) != 0)
    *(eax_29 * 0x3920 + &data_f89bcc) += 1

void* i = nullptr
data_13130dc = 0xffffffff
data_13130e0 = 0xffffffff
bool cond:1_1 = false
data_13130e4 = 0xffffffff
data_13130e8 = 0
data_1311178 = 1

do
    if (cond:1_1)
    label_48e2b2:
        ___report_rangecheckfailure()
        noreturn
    
    *(i + 0x1b8c220) = 0
    i += 1
    cond:1_1 = i u>= 0x40
while (i s< 0x40)

int32_t ecx_3 = data_7031bc
void* eax_32 = nullptr
data_641adf = 0

if (ecx_3 s> 0)
    do
        if (eax_32 u>= 0x200)
            goto label_48e2b2
        
        *(eax_32 + 0x1b15290) = 0
        eax_32 += 1
    while (eax_32 s< ecx_3)

void* i_1 = nullptr
bool cond:2_1 = false

do
    if (cond:2_1)
        goto label_48e2b2
    
    *(i_1 + 0x1b8c210) = 0
    i_1 += 1
    cond:2_1 = i_1 u>= 4
while (i_1 s< 4)

data_1b8be8d = 0
data_1b8be8c = 0
data_1311177 = 0
sub_4d1c30(sub_461c00(0x1b14a30), &data_1b14e60, 0x1b14a30, 0x424)
data_1b14e60 = 0
data_1b14e64 = 0
void* eax_34 = &data_1b14e8c
data_1b14e68 = 0
int32_t i_5 = 0x40
data_1b14e78 = 0
data_1b14e7c = 0
int32_t i_2

do
    *(eax_34 - 4) = 0
    eax_34 += 0x10
    *(eax_34 - 0x10) = 0
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
data_7035c8 = i_5
data_7035cc = i_5
data_7035d0 = i_5
data_7035d4 = i_5
sub_4994c0()
int128_t xmm0_1 = data_6248a0
bool cond:3_1 = data_12dc640 != 0
data_70365c = data_12a2948
data_703790 = data_12dc61c
data_703794 = data_12dc620
data_703798 = data_12dc628
data_7037c4 = data_12dc638
data_7037bc = data_12dc630
int32_t eax_41 = data_12dc634
data_703680.o = xmm0_1
int128_t xmm0_2 = data_624900
data_7037c0 = eax_41
int32_t eax_42 = data_7037a4

if (cond:3_1)
    eax_42 = data_12dc63c

data_703690 = xmm0_2
int128_t xmm0_3 = data_624940
data_703670 = 0
data_703674 = 0
data_70372c = 1
data_703730.o = xmm0_3
data_703740 = 1
data_703744 = 1
data_703788 = 1
data_70378c = 1
data_7037b8 = 1
data_70379c = 1
data_7037a0 = 1
data_7037a4 = eax_42
data_7037c8 = 1
data_7037d0 = 0
data_7037d4 = 0
data_7037d8 = 1
data_7037dc = 1
data_7037e0 = 0
data_7037e4 = 0
data_7037e8 = 1
data_7037ec = 0
data_703810 = 0xffffffff
data_703814 = 0
data_703838 = 0xffffffff
data_70383c = 0
sub_4a7c10()
int32_t eax_43 = data_70487c
int32_t edi_2 = data_7037a0

if (data_704888 == 0)
    eax_43 = 0

data_70486c = 0
data_704870 = 0
data_704874 = 1
data_704878 = 0
data_7037cc = 1
data_70487c = eax_43
data_704894 = 1

if (data_1af179c == 0)
    data_1af4e70 = edi_2
    
    if (edi_2 != 0)
        int32_t i_3
        
        do
            i_3 = ShowCursor(1)
        while (i_3 s<= 0)
    else
        int32_t i_4
        
        do
            i_4 = ShowCursor(0)
        while (i_4 s>= 0)

int32_t ecx_4 = data_7037a4
data_7037a0 = edi_2
sub_45ee40(ecx_4, 1)
data_7037a8 = 0xffffffff
data_7037ac = 0xffffffff
data_7037b0 = 0xffffffff
data_7037b4 = 0xffffffff
ClipCursor(nullptr)
