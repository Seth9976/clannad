// 函数: sub_4d5ab0
// 地址: 0x4d5ab0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = 0xffffffff
data_1c051a0 = 0
data_1c0519c = 0
int32_t var_10c = 0xffffffff

if (arg1 == 0)
    ebx = arg1 + 0x58
    var_10c = 0x5a
else if (arg1 == 1)
    ebx = arg1 + 0x59
    var_10c = 0x58

HWND eax_2 = GetFocus()
char eax_3

if (eax_2 == data_7027bc || (data_139270c != 0xffffffff && eax_2 == data_1bfe270))
    eax_3 = GetKeyState(0x90)

int32_t ecx

if ((eax_2 != data_7027bc && (data_139270c == 0xffffffff || eax_2 != data_1bfe270))
        || (eax_3 & 1) == 0)
    ecx = 0
else
    ecx = 1

int32_t eax_4 = data_1c05198

if (eax_4 != ecx)
    eax_4 = ecx

bool cond:1 = data_1392cc8 == 0
data_1c05198 = eax_4

if (not(cond:1))
    data_1370108 = 0
    data_1370104 = 0
    data_1c05194 = 0
    data_1c05190 = 0
    data_1392cc8 = 0

bool cond:0 = data_13701e0 != 1
char* eax_5 = &data_13701ed
data_1b8a700 = 0
int32_t i_5 = 0x12c
data_1b8a6fc = 0

if (cond:0)
    int32_t i
    
    do
        bool cond:2_1 = eax_5[0xa] == 0
        *(eax_5 - 1) = 0
        eax_5[1] = 0
        *(eax_5 + 3) = 0
        
        if (not(cond:2_1))
            *(eax_5 + 7) = 0
            eax_5[0xfffffff7] = 0
        
        eax_5 = &eax_5[0x24]
        i = i_5
        i_5 -= 1
    while (i != 1)
else
    int32_t i_1
    
    do
        *(eax_5 - 1) = 0
        eax_5 = &eax_5[0x24]
        eax_5[0xffffffdd] = 0
        *(eax_5 - 0x21) = 0
        *(eax_5 - 0x1d) = 0
        eax_5[0xffffffd3] = 0
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    data_13701e0 = i_5.b

if (data_13701e1 == 1)
    void* eax_6 = &data_13701f9
    int32_t i_6 = 0x12c
    int32_t i_2
    
    do
        *(eax_6 - 1) = 0
        eax_6 += 0x24
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
    data_13701e1 = i_6.b

HWND eax_7 = GetFocus()
void var_108
char var_107
char var_100
char var_fb
char var_ed
int32_t ecx_2
char var_106

if (eax_7 == data_7027bc || (data_139270c != 0xffffffff && eax_7 == data_1bfe270))
    for (int32_t nVirtKey = 0; nVirtKey s< 0x100; nVirtKey += 1)
        int32_t eax_8
        eax_8, ecx_2 = GetKeyState(nVirtKey)
        *(&var_108 + nVirtKey) = (eax_8 u>> 8).b & 0x80
    
    uint8_t eax_9 = data_1c0518c
    
    if (eax_9 == 0)
        if (var_fb == 0)
            eax_9 = 1
        
        var_fb = 0
        data_1c0518c = eax_9
    
    eax_9 = data_1c0518b
    
    if (eax_9 == 0 && ebx != 0xffffffff)
        if (*(&var_108 + ebx) == 0)
            eax_9 = 1
        
        data_1c0518b = eax_9
        
        if (ebx u>= 0x100)
            ___report_rangecheckfailure()
            noreturn
        
        *(&var_108 + ebx) = 0
    
    eax_9 = data_1c0518a
    
    if (eax_9 == 0)
        if (var_ed == 0)
            eax_9 = 1
        
        var_ed = 0
        data_1c0518a = eax_9
    
    eax_9 = data_1c05189
    
    if (eax_9 == 0)
        if (var_100 == 0)
            eax_9 = 1
        
        var_100 = 0
        data_1c05189 = eax_9
    
    eax_9 = data_1c05188
    
    if (eax_9 == 0 && var_10c != 0xffffffff)
        uint8_t eax_10 = eax_9
        
        if (*(&var_108 + var_10c) == 0)
            eax_10 = 1
        
        data_1c05188 = eax_10
        
        if (var_10c u>= 0x100)
            ___report_rangecheckfailure()
            noreturn
        
        *(&var_108 + var_10c) = 0
    
    int32_t eax_11 = data_1c05184
    
    if (eax_11 s>= 4)
        eax_11 -= 1
        var_107 = 0x80
        data_1c05184 = eax_11
    
    if (eax_11 == 3)
        uint32_t eax_12
        eax_12, ecx_2 = timeGetTime()
        data_1c05180 = eax_12
        eax_11 = data_1c05184 - 1
        data_1c0517c = 0
        data_1c05184 = eax_11
        var_107 = 0x80
    
    if (eax_11 == 2)
        uint32_t eax_14
        eax_14, ecx_2 = timeGetTime()
        int32_t eax_16 = data_1c0517c
        
        if (eax_14 - data_1c05180 u> 0x32 || eax_16 s> 0x14)
            data_1c05184 -= 1
        
        var_107 = 0x80
        data_1c0517c = eax_16 + 1
    else if (eax_11 == 1)
        data_1c05184 = 0
        var_107 = 0
    
    int32_t eax_18 = data_1c05178
    
    if (eax_18 s< 4)
        ecx_2.b = var_106
    else
        eax_18 -= 1
        ecx_2.b = 0x80
        data_1c05178 = eax_18
        char var_106_1 = 0x80
    
    if (eax_18 == 3)
        uint32_t eax_19
        eax_19, ecx_2 = timeGetTime()
        data_1c05174 = eax_19
        ecx_2.b = 0x80
        eax_18 = data_1c05178 - 1
        data_1c05170 = 0
        data_1c05178 = eax_18
        char var_106_2 = 0x80
    
    char var_106_3
    
    if (eax_18 == 2)
        uint32_t eax_21
        eax_21, ecx_2 = timeGetTime()
        int32_t eax_23 = data_1c05170
        
        if (eax_21 - data_1c05174 u> 0x32 || eax_23 s> 0x14)
            data_1c05178 -= 1
        
        ecx_2.b = 0x80
        data_1c05170 = eax_23 + 1
        var_106_3 = ecx_2.b
    else if (eax_18 == 1)
        data_1c05178 = 0
        ecx_2.b = 0
        var_106_3 = ecx_2.b
else
    sub_4d1ba0(eax_7, 0x100, &var_108, 0)
    ecx_2.b = var_106
char var_e2
char var_a0

if (var_e2 != 0 || var_a0 != 0)
    data_13701ec = 1

char var_e0
char var_a6

if (var_e0 != 0 || var_a6 != 0)
    data_1370234 = 1

char var_e3
char var_a4

if (var_e3 != 0 || var_a4 != 0)
    data_1370258 = 1

char var_e1
char var_a2

if (var_e1 != 0 || var_a2 != 0)
    data_1370210 = 1

int32_t eax_25 = data_1321ec4

if (var_fb != 0 || (ebx != 0xffffffff && *(&var_108 + ebx) != 0))
    data_13702a0 = 1
else if (var_107 != 0)
    if (eax_25 == 0)
        data_13702a0 = 1
    else
        data_1370298 = 0

if (var_ed != 0)
    data_137027c = 1
else if (var_10c == 0xffffffff)
    if (var_100 == 0)
        goto label_4d5f59
    
    data_137027c = 1
else if (*(&var_108 + var_10c) != 0 || var_100 != 0)
    data_137027c = 1
else
label_4d5f59:
    
    if (ecx_2.b != 0)
        if (eax_25 == 0)
            data_137027c = 1
        else
            data_1370274 = 0

if (var_107 == 0)
    data_1c0516c = 0
else
    data_13702c4 = 1
    data_1b8a700 = 1
    data_1c0516c = 1

if (ecx_2.b == 0)
    data_1c05168 = 0
else
    data_13702e8 = 1
    data_1b8a6fc = 1
    data_1c05168 = 1

void* ecx_3 = &data_137066c
char eax_26 = data_137030c
char var_e8

if (var_e8 != 0)
    eax_26 = 1

data_137030c = eax_26
char eax_27 = data_1370330
char var_e7

if (var_e7 != 0)
    eax_27 = 1

data_1370330 = eax_27
char eax_28 = data_1370354
char var_e6

if (var_e6 != 0)
    eax_28 = 1

data_1370354 = eax_28
int32_t i_3

for (i_3 = 0; i_3 s< 0x100; )
    if (*(&var_108 + i_3) != 0)
        *ecx_3 = 1
    
    i_3 += 1
    ecx_3 += 0x24

int32_t edx_2 = data_1392710
void* ecx_4 = &data_13701e8
int32_t esi_1 = data_131d2cc
int32_t i_7 = 0x12c
int32_t edi = data_1320e58
int32_t i_4

do
    i_3.b = *(ecx_4 - 4)
    
    if (*(ecx_4 + 4) == 0)
        if (i_3.b == 2 || i_3.b == 3 || *(ecx_4 + 0xe) u>= 2)
            *(ecx_4 + 6) = 1
            *(ecx_4 + 0xd) = 1
        
        bool cond:15_1 = *(ecx_4 + 0x10) != 0
        *(ecx_4 - 4) = 1
        
        if (not(cond:15_1) && *(ecx_4 + 0x11) == 1)
            if (*(ecx_4 + 0x14) != esi_1 || *(ecx_4 + 0x18) != edi)
                *(ecx_4 + 0x11) = 0
            else
                *(ecx_4 + 0x11) = 2
    else
        if (i_3.b == 1)
            *(ecx_4 + 5) = i_3.b
            *(ecx_4 + 0xc) = i_3.b
            *ecx_4 = edx_2
            *(ecx_4 - 4) = 2
        else if (i_3.b == 2)
            i_3 = edx_2 - *ecx_4
            
            if (i_3 u>= 0x96)
                *ecx_4 = edx_2
                *(ecx_4 - 4) = 3
        else if (i_3.b == 3)
            i_3 = edx_2 - *ecx_4
            *(ecx_4 + 8) = i_3
        
        if (*(ecx_4 + 0x10) == 0)
            if (*(ecx_4 + 0x11) == 0)
                *(ecx_4 + 0x1c) = edx_2
                *(ecx_4 + 0x11) = 1
                *(ecx_4 + 0x14) = esi_1
                *(ecx_4 + 0x18) = edi
            
            i_3.b = *(ecx_4 + 0x11)
            
            if ((i_3.b == 1 && *(ecx_4 + 0xe) u>= 2) || i_3.b == 2)
                if (*(ecx_4 + 0x14) != esi_1)
                    *(ecx_4 + 0x11) = 0
                else
                    if (*(ecx_4 + 0x18) == edi)
                        i_3 = edx_2 - *(ecx_4 + 0x1c)
                        
                        if (i_3 u< 0x15e)
                            *(ecx_4 + 0x10) = 1
                    
                    *(ecx_4 + 0x11) = 0
    
    *(ecx_4 + 0xe) = 0
    ecx_4 += 0x24
    i_4 = i_7
    i_7 -= 1
while (i_4 != 1)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return i_3
