import express from "express"
import cors from "cors"
import cookieParser from "cookie-parser"

const app = express()

app.use(cors({
    origin: process.env.CORS_ORIGIN,
    credentials: true
}))

app.use(express.json({limit: "16kb"}))
app.use(express.urlencoded({extended: true, limit: "16kb"}))
app.use(express.static("public"))
app.use(cookieParser())

//yha apan routes likhenge
import userRouter from "./routes/user.router.js"

//Routes declareatiuon -> yha app.get nhi likh sakte, yha middleware laana pdega issiliye app.use krenge
app.use("/api/v1/users",userRouter);

// http://localhost:8000/api/v1/users/register

export {app}