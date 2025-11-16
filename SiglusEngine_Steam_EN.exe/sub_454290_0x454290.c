// 函数: sub_454290
// 地址: 0x454290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1b8ad70
data_1332b54 = eax
data_976f74 = eax
data_976f78 = data_1332b60
data_976f7c = data_1332b64
uint32_t eax_3 = timeGetTime()

if (data_1af40f8 == 0)
    LPARAM eax_4 = sub_4531b0()
    
    if (eax_4 == 0)
        return PostMessageA(data_7027bc, 2, eax_4, eax_4)

if (data_641ac8 == 0)
    sub_44bbb0()
    data_641ac8 = 1

if (data_108feb8 == 0 || data_1333e30 == 0
    || (data_1332b60 == data_1332b5c && data_1332b64 == data_1332b58))
label_454398:
    
    if (data_187c608 != 0)
        data_187c608 = 0
        data_703008 = 1
else
    if (data_187c610 == 0)
        int32_t ecx_1
        ecx_1.b = sub_41a940() != 0
        data_187c610 = ecx_1
    
    int32_t ecx_2
    
    if (data_1332b80 == 0)
        ecx_2 = data_187c60c
    label_45437f:
        
        if (ecx_2 == 0)
            goto label_454398
    else if (data_187c60c == 0)
        ecx_2.b = sub_41aa30() != 0
        data_187c60c = ecx_2
        goto label_45437f
    
    if (data_187c608 == 0)
        data_187c608 = 1
        data_703008 = 1

int32_t eax_10 = data_137475c

if (data_1af4518 != eax_10)
    data_1af4518 = eax_10
    data_703008 = 1

if (data_187c624 != 0)
    sub_4e3760(1)
    data_187c624 = 0

sub_488190()

if (data_1af0f1c != data_1356ed4 || data_1af0f18 != data_1356ec0 || data_1af0f14 != data_1356ec4
        || data_1af0f10 != data_1356ed0)
    sub_41e730()
    data_1356ec8
    data_1356ec4
    sub_4a3ea0()
    data_1af0f1c = data_1356ed4
    data_1af0f18 = data_1356ec0
    data_1af0f14 = data_1356ec4
    data_1af0f10 = data_1356ed0

int32_t eax_19 = 0
data_187c604 = 0

if (data_702fc0 != 0)
    if (data_131324c != 0)
        eax_19 = 1
    
    data_187c604 = eax_19
    HWND eax_20 = GetActiveWindow()
    
    if (data_702fc0 != 0)
        for (int32_t* i = &data_1af0a10; i s< &data_1af0b10; i = &i[1])
            int32_t edx_2 = *i
            
            if (edx_2 != 0 && edx_2 == eax_20)
                if ((0x8000 & GetAsyncKeyState(0x11)) == 0)
                    data_187c600 = 0
                else
                    int32_t eax_22 = data_187c600
                    
                    if (eax_22 == 0)
                        data_187c600 = 1
                    else if (eax_22 == 1)
                        data_187c600 = 2
                
                break
    
    HWND eax_23
    int32_t* ecx_4
    eax_23, ecx_4 = GetActiveWindow()
    
    if (data_702fc0 == 0)
    label_45456a:
        data_641ab8 = 0
    else
        ecx_4 = &data_1af0a10
        
        while (true)
            int32_t edx_3 = *ecx_4
            
            if (edx_3 != 0 && edx_3 == eax_23)
                break
            
            ecx_4 = &ecx_4[1]
            
            if (ecx_4 s>= &data_1af0b10)
                goto label_45456a_2
        
        if (data_71929c != 0x11)
        label_45456a_1:
            data_641ab8 = 0
        else
            ecx_4 = 0x8000
            
            if ((0x8000 & GetAsyncKeyState(0xd)) == 0)
                char eax_25 = data_13702a2
                ecx_4 = 1
                
                if (data_641ab8 != 0)
                    eax_25 = 1
                
                data_13702a2 = eax_25
            label_45456a_2:
                data_641ab8 = 0
            else
                data_641ab8 = 1
    
    int32_t eax_26 = sub_4a0aa0(ecx_4)
    
    if (eax_26 == 0 && data_1af16ec != eax_26.b)
        sub_4cfd70(&data_1af16c8, &data_1af16ec)
        data_187c53c = data_187c538
        data_1af16ec = 0
    
    if (sub_49e690(0x976380, data_63e16c) == 0)
        int32_t eax_29 = data_1af16c4
        
        if (eax_29 != 0xffffffff)
            data_1af16c0 = eax_29
            data_1af16c4 = 0xffffffff
    
    for (int32_t i_1 = 0; i_1 s< 0x10; i_1 += 1)
        int32_t eax_30
        
        if (i_1 != 0xffffffff && i_1 u<= 0xf)
            eax_30 = sub_49e690(i_1 * 0x788 + 0x92b978, i_1 + 0x20)
        
        if (i_1 == 0xffffffff || i_1 u> 0xf || eax_30 == 0)
            int32_t eax_31 = i_1 * 9
            
            if (*((eax_31 << 2) + &data_1af1360) != 0)
                sub_4cfd70((eax_31 << 2) + &data_1af1000, (eax_31 << 2) + &data_1af1360)
                *((i_1 << 2) + &data_187c5a0) = *((i_1 << 2) + &data_187c540)
                *((eax_31 << 2) + &data_1af1360) = 0
    
    int32_t edi_2 = 0
    void* i_2 = &data_2091554
    int32_t ecx_8 = 0
    int32_t var_14_1 = 0
    
    do
        int32_t var_10_1
        
        if (data_641b5c != 0 && edi_2 + 0x30 u<= 0x3f)
            WaitForSingleObject(data_641b54, 0xffffffff)
            
            if (*(i_2 + 4) != 0)
                var_10_1 = 1
            
            if (*(i_2 + 4) == 0 || *i_2 == 0)
                var_10_1 = 0
            
            ReleaseSemaphore(data_641b54, 1, nullptr)
            ecx_8 = var_14_1
        
        if ((data_641b5c == 0 || edi_2 + 0x30 u> 0x3f || var_10_1 == 0)
                && *(ecx_8 + &data_1af15a0) != 0)
            sub_4cfd70(ecx_8 + &data_1af1240, ecx_8 + &data_1af15a0)
            ecx_8 = var_14_1
            *((edi_2 << 2) + &data_187c5e0) = *((edi_2 << 2) + &data_187c580)
            *(ecx_8 + &data_1af15a0) = 0
        
        i_2 += 0x180
        ecx_8 += 0x24
        edi_2 += 1
        var_14_1 = ecx_8
    while (i_2 s< 0x2092154)
    
    int32_t esi_1 = 0
    
    for (void* i_3 = &data_208d354; i_3 s< 0x208eb54; )
        int32_t var_10_2
        
        if (data_641b5c != 0 && esi_1 + 4 u<= 0x3f)
            WaitForSingleObject(data_641b54, 0xffffffff)
            
            if (*(i_3 + 4) != 0)
                var_10_2 = 1
            
            if (*(i_3 + 4) == 0 || *i_3 == 0)
                var_10_2 = 0
            
            ReleaseSemaphore(data_641b54, 1, nullptr)
        
        if (data_641b5c == 0 || esi_1 + 4 u> 0x3f || var_10_2 == 0)
            int32_t eax_37 = *((esi_1 << 2) + &data_1af0fc0)
            
            if (eax_37 != 0xffffffff)
                *((esi_1 << 2) + &data_1af0f80) = eax_37
                *((esi_1 << 2) + &data_1af0fc0) = 0xffffffff
        
        i_3 += 0x180
        esi_1 += 1
    
    uint32_t eax_39 = timeGetTime() - eax_3
    
    if (eax_39 u< 0x64)
        int32_t ecx_11 = data_187c534 + 1
        data_187c534 = ecx_11
        eax_39 = ecx_11 s/ 3 * 3
        LPARAM ecx_12 = ecx_11 s% 3
        
        if (ecx_11 == eax_39 && data_1392cb4 != ecx_12)
            eax_39 = PostMessageA(data_7027bc, 2, ecx_12, ecx_12)
            data_71929c = 1
            data_7192a0 = 0
            data_7192e0 = 0
            data_1af4250 = 1
    
    if (data_1af0a6c != 0)
        sub_4d1c30(eax_39, &data_72d6b0, 0x1cd6420, 0x194000)
    
    if (data_1af0ac4 != 0)
        sub_475850(0)

if (sub_49e690(0x976380, data_63e16c) == 0)
    int32_t eax_45 = data_187c530
    int32_t ecx_13 = data_1392710
    int32_t edx_10
    
    if (eax_45 == 0)
        edx_10 = ecx_13
        data_187c530 = 1
        data_187c52c = edx_10
    label_45485f:
        
        if (ecx_13 - edx_10 u>= data_12a295c)
            sub_4a1090(0xff, data_12a2960)
            ecx_13 = data_1392710
            data_187c530 = 2
    else if (eax_45 == 1)
        edx_10 = data_187c52c
        goto label_45485f
    int32_t eax_48 = data_187c528
    int32_t eax_49
    
    if (eax_48 == 0)
        eax_49 = ecx_13
        data_187c528 = 1
        data_187c524 = eax_49
    label_4548af:
        
        if (ecx_13 - eax_49 u>= data_12a294c)
            data_187c528 = 2
            data_1af1714 = 0
    else if (eax_48 == 1)
        eax_49 = data_187c524
        goto label_4548af

if (data_12ff384 == 0)
    data_641acc = 0
else if (sub_4a5d20() == 0)
    data_641acc = 0
else if ((0x8000 & GetAsyncKeyState(0x12)) == 0)
    data_641acc = 0
else
    data_13702a1.w = 0
    
    if ((0x8000 & GetAsyncKeyState(0xd)) == 0)
        data_641acc = 0
    else if (data_641acc == 0)
        data_641acc = 1

sub_45eb10()

if (data_702fc0 == 0)
    data_1af0a0c = 0
    data_1af09ec = 0
    sub_483d30()
else if (data_1af09ec == 0)
    sub_483d30()

sub_45ef40()
sub_45ec50()
int32_t esi_2 = data_108f314

if (esi_2 != 0xffffffff)
    int32_t ecx_15 = data_1cd531c
    int32_t edi_3 = ecx_15
    
    if (data_1cd5320 != 0xff)
        int32_t eax_53 = data_1cd533c
        int32_t ecx_16
        
        if (eax_53 == 1)
            ecx_16 = data_1392710
        else if (eax_53 == 2)
            ecx_16 = data_1392ccc
        else
            ecx_16 = data_131310c
        
        int32_t edx_14 = data_1cd5334 + ecx_16 - data_1cd5330
        data_1cd5330 = ecx_16
        data_1cd5334 = edx_14
        sub_4d1fd0(&data_1cd5318, edx_14)
        ecx_15 = data_1cd531c
    
    data_1cd5314 = ecx_15
    
    if (edi_3 != ecx_15 || data_63e150 != 0)
        int32_t eax_58 = data_1321ec4
        data_63e150 = 0
        
        if (eax_58 != 3)
            HCURSOR hCursor
            
            if (eax_58 != 0)
                hCursor = LoadCursorA(nullptr, 0x7f00)
            else
                hCursor = (&data_1321ee0)[data_13132c4 + ((ecx_15 + esi_2 * 0x22) << 1)]
            
            if (hCursor != 0 && GetCursor() != hCursor)
                SetCursor(hCursor)

HWND result = data_12ff384

if (result != 0)
    if (data_108f338 == 0x3e7 || result == 2 || data_1c051d4 == 1)
        result = 2
    else
        int32_t ecx_18 = data_1332b60
        bool cond:9_1
        
        if (ecx_18 != 0x280)
            if (ecx_18 == 0x320)
                cond:9_1 = data_1332b64 == 0x258
                goto label_454a82
            
            result = 2
        else
            cond:9_1 = data_1332b64 == 0x1e0
        label_454a82:
            
            if (not(cond:9_1))
                result = 2
    
    if (data_187c520 == 0xffffffff && data_641acc == 1)
        data_641acc = 2
        
        if (result != 2)
        label_454ad5:
            
            if (data_187c518 == 0)
                result = sub_4d4e10(1, 1)
            else
                data_1c0518e = 0
                data_1c0518f = 0
                data_187c520 = 0
                data_187c518 = 0
                int32_t ecx_19
                result, ecx_19 = sub_4d4db0()
                
                if (result.b != 0)
                    int32_t eax_66 = data_1af40f4
                    data_1c0518f = 1
                    
                    if (eax_66 == data_1c051d0)
                        result = data_1af40f0
                    
                    if (eax_66 != data_1c051d0 || result != data_1c051cc)
                        int32_t var_24_4 = ecx_19
                        data_1c0518e = 1
                        sub_4d5380(&data_1c051d0, &data_1c051cc)
                        data_1af40f4 = data_1c051d0
                        result = data_1c051cc
                        data_1af40f0 = result
        else
            HWND hWnd = data_1c054ec
            
            if (hWnd != 0)
                if (data_187c51c != 0)
                    SendMessageA(hWnd, 0x10, 0, 0)
                
                goto label_454ad5
            
            HWND hWndParent = data_7027bc
            data_1b8be8e = 0
            result = CreateDialogParamA(data_134cebc, 0x16a, hWndParent, sub_545510, 0)
            data_1c054ec = result
        
        data_1392cc4 = 0
        data_13701e0 = 1
        data_1392cc8 = 1
        data_f89aec = 0xffffffff
        data_f89af0 = 0xffffffff
        data_f89af4 = 0xffffffff
        data_f89af8 = 0xffffffff

if (data_702fc0 != 0)
    sub_563510()
    
    if (data_702fc0 != 0 && data_1af0a78 != 0 && data_1318520 == 1)
        sub_563b20(0)
    
    if (data_1af0a6c != 0)
        sub_4757c0(1)
    
    if (data_1af0ac4 != 0)
        sub_475850(1)
    
    sub_55a930(0)
    
    if (data_1af09ec == 0)
        data_641ac4 = 0
        data_641ab4 = 0
        data_641ac0 = 0
    else
        HWND eax_68
        
        if (data_13191a8 != 0)
            eax_68 = GetFocus()
        
        if (data_13191a8 != 0 &&
                (eax_68 == data_7027bc || (data_139270c != 0xffffffff && eax_68 == data_1bfe270)))
            int16_t eax_69 = GetAsyncKeyState(0xd)
            int16_t eax_70
            
            if ((0x8000 & eax_69) == 0)
                eax_70 = GetAsyncKeyState(1)
            
            if ((0x8000 & eax_69) != 0 || (0x8000 & eax_70) != 0)
                data_641ac4 = 1
            else
                int32_t eax_71 = data_1af09ec
                bool cond:14_1 = data_641ac4 != 0
                data_641ac4 = 0
                
                if (cond:14_1)
                    eax_71 = 0
                
                data_1af09ec = eax_71
        else
            data_641ac4 = 0
        
        HWND eax_72 = GetActiveWindow()
        int32_t ecx_20 = data_1af0a8c
        
        if (ecx_20 == 0 || ecx_20 != eax_72)
            data_641ab4 = 0
        else if ((0x8000 & GetAsyncKeyState(0xd)) == 0)
            int32_t eax_74 = data_1af09ec
            bool cond:13_1 = data_641ab4 != 0
            data_641ab4 = 0
            
            if (cond:13_1)
                eax_74 = 0
            
            data_1af09ec = eax_74
        else
            data_641ab4 = 1
        
        HWND eax_75 = GetFocus()
        HWND eax_76
        int32_t ecx_21
        
        if (eax_75 != data_7027bc && (data_139270c == 0xffffffff || eax_75 != data_1bfe270))
            eax_76 = GetActiveWindow()
            
            if (data_702fc0 != 0)
                for (int32_t* i_4 = &data_1af0a10; i_4 s< &data_1af0b10; i_4 = &i_4[1])
                    int32_t edx_15 = *i_4
                    
                    if (edx_15 != 0 && edx_15 == eax_76)
                        goto label_454d87
            
            ecx_21 = data_1c054ec
        
        if (eax_75 != data_7027bc && (data_139270c == 0xffffffff || eax_75 != data_1bfe270)
                && (ecx_21 == 0 || ecx_21 != eax_76))
            data_641ac0 = 0
        else
        label_454d87:
            bool cond:11_1 = (0x8000 & GetAsyncKeyState(0x11)) != 0
            int32_t eax_78 = data_1af09ec
            
            if (cond:11_1)
                eax_78 = 0
            
            data_1af09ec = eax_78
            
            if ((0x8000 & GetAsyncKeyState(0x31)) == 0)
                data_641ac0 = 0
            else if (data_641ac0 != 0)
                uint32_t eax_81 = timeGetTime()
                int32_t ecx_22 = 0x32
                
                if (data_641ac0 == 1)
                    ecx_22 = 0xc8
                
                if (eax_81 - data_641abc u>= ecx_22)
                    data_641abc = eax_81
                    data_641ac0 = 2
                    data_1af09ec = 0
            else
                data_641abc = timeGetTime()
                data_641ac0 = 1
                data_1af09ec = 0
    
    if (data_704878 == 0)
        HWND eax_82 = GetFocus()
        
        if (eax_82 == data_7027bc)
        label_454e72:
            int32_t ecx_23 = sub_453b80(GetFocus)
            
            if (data_137118a != 0)
                int32_t eax_83 = data_71929c
                
                if (eax_83 == 0x24)
                    ecx_23 = sub_420450()
                    eax_83 = data_71929c
                
                int32_t ecx_24
                int32_t edx_18
                
                if (eax_83 == 0x22 || eax_83 == 0x23 || eax_83 == 0x24)
                    edx_18 = data_1357028
                    int32_t var_24_6 = ecx_23
                    ecx_24 = data_135702c
                else
                    edx_18 = data_72d6ac
                    int32_t var_24_5 = ecx_23
                    ecx_24 = data_719b6c
                
                sub_4a5e00(ecx_24, edx_18)
            
            BOOL eax_84 = sub_453ea0()
            
            if (data_13710fa != 0)
                int32_t ecx_25 = data_703660
                
                if (ecx_25 != 0xffffffff)
                    sub_4a35a0(eax_84, data_703664, ecx_25, 0x63)
            
            sub_453fe0()
            
            if (data_1371652 != 0)
                data_131324c ^= 1
                data_703008 = 1
            
            if (data_1371676 != 0)
                sub_573330()
                data_1371676 = 0
            
            if (data_137169a != 0)
                data_1313244 ^= 1
                data_703008 = 1
            
            if (data_13716be != 0)
                sub_5552a0()
            
            if (data_13716e2 != 0)
                sub_557400()
            
            sub_454110()
            sub_4541b0()
            
            if (data_137174e != 0)
                if (data_1313cd4 != 0)
                    sub_55af90()
                    data_1313cd4 = 0
                else
                    sub_55a460()
                    data_1313cd4 = 1
        else if (data_139270c != 0xffffffff && eax_82 == data_1bfe270)
            goto label_454e72
    
    if (data_108f328 != 0 && data_704874 != 0 && (data_1af0a04 != data_131324c
            || data_1af0a00 != data_719b6c || data_1af09fc != data_72d6ac
            || data_1af09f8 != data_91e8fc || data_1af09f4 != data_719ba4
            || data_1af09f0 != data_704870))
        sub_4a5b60()
        data_1af0a04 = data_131324c
        data_1af0a00 = data_719b6c
        data_1af09fc = data_72d6ac
        data_1af09f8 = data_91e8fc
        data_1af09f4 = data_719ba4
        data_1af09f0 = data_704870
    
    result = data_704878
    
    if (result == 0 || result == 2)
        HWND eax_97 = GetFocus()
        int16_t eax_98
        
        if (eax_97 == data_7027bc || (data_139270c != 0xffffffff && eax_97 == data_1bfe270))
            eax_98 = GetAsyncKeyState(0x24)
        
        if ((eax_97 != data_7027bc && (data_139270c == 0xffffffff || eax_97 != data_1bfe270))
                || (0x8000 & eax_98) == 0)
            HWND eax_101 = GetFocus()
            
            if (eax_101 == data_7027bc)
            label_4550ea:
                
                if ((0x8000 & GetAsyncKeyState(0x23)) != 0)
                    data_187c514 = 0x10
                    data_187c510 = 0x10
            else if (data_139270c != 0xffffffff && eax_101 == data_1bfe270)
                goto label_4550ea
        else
            data_187c514 = 4
            data_187c510 = 4
            HWND eax_99 = GetFocus()
            
            if (eax_99 == data_7027bc)
            label_4550ab:
                
                if ((0x8000 & GetAsyncKeyState(0x23)) != 0)
                    data_187c514 = 0xffffffff
                    data_187c510 = 0xffffffff
            else if (data_139270c != 0xffffffff && eax_99 == data_1bfe270)
                goto label_4550ab
        
        HWND eax_103 = GetFocus()
        int16_t eax_104
        
        if (eax_103 == data_7027bc || (data_139270c != 0xffffffff && eax_103 == data_1bfe270))
            eax_104 = GetAsyncKeyState(0x2d)
        
        if ((eax_103 != data_7027bc && (data_139270c == 0xffffffff || eax_103 != data_1bfe270))
                || (0x8000 & eax_104) == 0)
            result = GetFocus()
            
            if (result == data_7027bc)
            label_4551a7:
                result = GetAsyncKeyState(0x2e)
                
                if ((0x8000 & result.w) != 0)
                    data_187a5cc = 4
                    data_187a5c8 = 4
            else if (data_139270c != 0xffffffff && result == data_1bfe270)
                goto label_4551a7
        else
            data_187a5cc = 8
            data_187a5c8 = 8
            result = GetFocus()
            
            if (result == data_7027bc)
            label_455164:
                result = GetAsyncKeyState(0x2e)
                
                if ((0x8000 & result.w) != 0)
                    data_187a5cc = 0x20
                    data_187a5c8 = 0x20
            else if (data_139270c != 0xffffffff && result == data_1bfe270)
                goto label_455164

return result
