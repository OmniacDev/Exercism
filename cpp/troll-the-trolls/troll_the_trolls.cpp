namespace hellmath {
    enum class AccountStatus {
        troll,
        guest,
        user,
        mod
    };

    enum class Action {
        read,
        write,
        remove
    };

    bool display_post(AccountStatus poster, AccountStatus viewer) {
        return (poster == AccountStatus::troll && viewer == AccountStatus::troll) || (poster != AccountStatus::troll);
    }

    bool permission_check(Action action, AccountStatus status) {
        switch (status) {
            case AccountStatus::guest:
                return action == Action::read;
            case AccountStatus::troll:
            case AccountStatus::user:
                return action != Action::remove;
            case AccountStatus::mod:
                return true;
            default: return false;
        }
    }

    bool valid_player_combination(AccountStatus p1, AccountStatus p2) {
        if (p1 == AccountStatus::guest || p2 == AccountStatus::guest) return false;
        if (p1 == AccountStatus::troll && p2 == AccountStatus::troll) return true;
        if (p1 != AccountStatus::troll && p2 != AccountStatus::troll) return true;
        else return false;
    }

    bool has_priority(AccountStatus first, AccountStatus second) {
        return first > second;
    }
}