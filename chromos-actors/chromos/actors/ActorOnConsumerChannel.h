/*
 * Copyright (C) 2020  Jordi Sánchez
 * This file is part of Chromos
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#pragma once

#include <chromos/channels/ConsumerChannel.h>
#include <chromos/actors/Actor.h>


class ActorOnConsumerChannel: public Actor {
public:
    ActorOnConsumerChannel(ConsumerChannel *channel);

    virtual void execute(std::string message) = 0;

protected:
    void execute();

private:
    ConsumerChannel *channel;
};
